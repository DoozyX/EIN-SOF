#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 3.	Напиши програм кој врши бришење од дрво, така да структурата на дрвото не се губи.
 * Секоја од користените функции да се објасни. (помош: користете web решенија за binary tree delete)
 */

/* samo-referencirachka struktura */
struct treeNode {
    struct treeNode *leftPtr;  /* pokazhuvach do levoto poddrvo */
    int data; /* node value */
    struct treeNode *rightPtr; /* pokazhuvach do desnoto poddrvo */
}; /* kraj structure treeNode */

typedef struct treeNode TreeNode; /* sinonim za struct treeNode */
typedef TreeNode *TreeNodePtr; /* sinonim za TreeNode* */

/* prototipovi */
void insertNode(TreeNodePtr *treePtr, int value);

struct treeNode *minValueNode(struct treeNode *node)
{
    struct treeNode *current = node;

    /* loop down to find the leftmost leaf */
    while (current->leftPtr != NULL)
        current = current->leftPtr;

    return current;
}

struct treeNode *deleteNode(struct treeNode *root, int key) {
    // base case
    if (root == NULL) return root;
    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->data)
        root->leftPtr = deleteNode(root->leftPtr, key);

        // If the key to be deleted is greater than the root's key,
        // then it lies in right subtree
    else if (key > root->data)
        root->rightPtr = deleteNode(root->rightPtr, key);

        // if key is same as root's key, then This is the node
        // to be deleted
    else {
        // node with only one child or no child
        if (root->leftPtr == NULL) {
            struct treeNode *temp = root->rightPtr;
            free(root);
            return temp;
        } else if (root->rightPtr == NULL) {
            struct treeNode *temp = root->leftPtr;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        struct treeNode * temp = minValueNode(root->rightPtr);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->rightPtr = deleteNode(root->rightPtr, temp->data);
    }
    return root;
}



void inOrder(TreeNodePtr treePtr);

void preOrder(TreeNodePtr treePtr);

void postOrder(TreeNodePtr treePtr);

/* pochetok na izvrshuvanjeto */
int main() {
    int i; /* brojach od 1-10 */
    int item; /* promenliva shto sodrzhi sluchajni vrednosti */
    TreeNodePtr rootPtr = NULL; /* drvoto vo pochetokot e prazno */

    srand(time(NULL));
    printf("Broevite koi se stavaat vo drvoto se: ");

    /* vnesi sluchajni broevi megju 1 i 15 vo drvoto */
    for (i = 1; i <= 10; i++) {
        item = rand() % 15;
        printf("%3d", item);
        insertNode(&rootPtr, item);
    } /* kraj for */



    /* pomini go drvoto vo preOrder */
    printf("\n\nPominuvanjeto vo preOrder dava:\n");
    preOrder(rootPtr);

    /* pomini go drvoto vo inOrder */
    printf("\n\nPominuvanjeto vo inOrder dava:\n");
    inOrder(rootPtr);
    deleteNode(rootPtr, 5);
    /* pomini go drvoto vo postOrder */
    printf("\n\nPominuvanjeto vo postOrder dava:\n");
    postOrder(rootPtr);

    return 0; /* uspeshen kraj */

} /* kraj main */

/* vnesi jazel vo drvo */
void insertNode(TreeNodePtr *treePtr, int value) {

    /* ako drvoto e prazno */
    if (*treePtr == NULL) {
        *treePtr = malloc(sizeof(TreeNode));

        /* ako alocirashe memorija, napolni ja so podatoci */
        if (*treePtr != NULL) {
            (*treePtr)->data = value;
            (*treePtr)->leftPtr = NULL;
            (*treePtr)->rightPtr = NULL;
        } /* kraj if */
        else {
            printf("%d ne e vneseno. Nema dovolno memorija.\n", value);
        } /* kraj else */

    } /* kraj if */
    else { /* drvoto ne e prazno */

        /* podatokot shto se vnesuva e pomal od podatokot vo tekovniot jazel */
        if (value < (*treePtr)->data) {
            insertNode(&((*treePtr)->leftPtr), value);
        } /* kraj if */

            /* podatokot shto se vnesuva e pogolem od podatokot vo tekovniot jazel */
        else if (value > (*treePtr)->data) {
            insertNode(&((*treePtr)->rightPtr), value);
        } /* kraj else if */
        else { /* duplikat vrednostite se ignoriraat */
            printf("dup");
        } /* kraj else */
    } /* kraj else */
} /* kraj na funkcijata insertNode */

/* pochni so inorder pominuvanje na drvo */
void inOrder(TreeNodePtr treePtr) {
    /* ako drvoto ne e prazno, pomini go */
    if (treePtr != NULL) {
        inOrder(treePtr->leftPtr);
        printf("%3d", treePtr->data);
        inOrder(treePtr->rightPtr);
    } /* kraj if */
} /* kraj na funkcijata inOrder */

/* pochni so preorder pominuvanje na drvoto */
void preOrder(TreeNodePtr treePtr) {
    /* ako drvoto ne e prazno, pomini go */
    if (treePtr != NULL) {
        printf("%3d", treePtr->data);
        preOrder(treePtr->leftPtr);
        preOrder(treePtr->rightPtr);
    } /* kraj if */
} /* kraj na funkcijata preOrder */

/* pochni so postorder pominuvanjeto na drvoto */
void postOrder(TreeNodePtr treePtr) {
    /* ako drvoto ne e prazno, pomini go */
    if (treePtr != NULL) {
        postOrder(treePtr->leftPtr);
        postOrder(treePtr->rightPtr);
        printf("%3d", treePtr->data);
    } /* kraj if */
} /* kraj na funkcijata postOrder */
