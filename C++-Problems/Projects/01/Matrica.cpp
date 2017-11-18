#include "Matrica.h"

Matrica::Matrica(int row, int column) : row(row), column(column) {
    matrix = new int *[row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[column];
    }
}

Matrica::Matrica(double num) : row(static_cast<int>(num)), column(static_cast<int>(num)) {
    auto n = (int) num;
    matrix = new int *[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = n;
        }
    }
}

Matrica::Matrica(const Matrica &m) : row(m.row), column(m.column) {
    matrix = new int *[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[column];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            matrix[i][j] = m.matrix[i][j];
    }
}

Matrica &Matrica::operator=(const Matrica &m) {
    if (&m != this) {
        if (row != m.row || column != m.column) {
            for (int i = 0; i < row; i++) {
                delete[] matrix[i];
            }
            delete[] matrix;

            row = m.row;
            column = m.column;

            matrix = new int *[row];
            for (int i = 0; i < row; i++) {
                matrix[i] = new int[column];
            }
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                matrix[i][j] = m.matrix[i][j];
            }
        }
    }

    return *this;
}


ostream &operator<<(ostream &output, const Matrica &matrica) {
    for (int i = 0; i < matrica.row; ++i) {
        for (int j = 0; j < matrica.column; ++j) {
            output << matrica.matrix[i][j] << " ";
        }
        cout << endl;
    }
    return output;
}

istream &operator>>(istream &input, Matrica &m) {
    for (int i = 0; i < m.row; ++i) {
        for (int j = 0; j < m.column; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            input >> m.matrix[i][j];
        }
    }
    return input;
}

Matrica::Proxy Matrica::operator[](int index) {
    if (index < 0 || index >= row) {
        cout << "Wrong Row\n";
        return Proxy(matrix[0], column);
    }
    return Proxy(matrix[index], column);
}

Matrica Matrica::operator+(Matrica &m) {
    Matrica tmp(*this);

    if (row != m.row || column != m.column) {
        cout << "Matrix not compatible.\n";
        return tmp;
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            tmp[i][j] = matrix[i][j] + m.matrix[i][j];
        }
    }

    return tmp;
}

Matrica Matrica::operator-(Matrica &m) {
    Matrica tmp(*this);
    if (row != m.row || column != m.column) {
        cout << "Matrix not compatible.\n";
        return tmp;
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            tmp[i][j] = matrix[i][j] - m[i][j];
        }
    }

    return tmp;
}

Matrica Matrica::operator*(Matrica &m) {
    Matrica tmp(row, m.column);

    if (column != m.row) {
        cout << "Error! column of first matrix not equal to row of second.";
        return tmp;
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < m.column; ++j) {
            tmp[i][j] = 0;
            for (int k = 0; k < column; ++k) {
                tmp[i][j] += matrix[i][k] * m.matrix[k][j];
            }
        }
    }
    return tmp;
}

Matrica Matrica::operator*(int n) {
    Matrica tmp(*this);

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            tmp[i][j] = matrix[i][j] * n;
        }
    }

    return tmp;
}


Matrica operator*(int n, Matrica &m) {
    Matrica tmp(m);

    for (int i = 0; i < m.row; ++i) {
        for (int j = 0; j < m.column; ++j) {
            tmp[i][j] = m.matrix[i][j] * n;
        }
    }

    return tmp;
}

bool Matrica::operator==(Matrica &m) {
    for (int i = 0; i < m.row; ++i) {
        for (int j = 0; j < m.column; ++j) {
            if (matrix[i][j] != m.matrix[i][j]) {
                return false;
            }
        }
    }

    return true;

}

bool Matrica::operator!=(Matrica &m) {
    return !(*this == m);
}

Matrica::~Matrica() {
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}






