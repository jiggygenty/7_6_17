#ifndef GAUSSIAN_ELIMINATION_H
#define GAUSSIAN_ELIMINATION_H

#include <stdio.h>

#define N 2

void print_mat(float a[N][N]);
void gaussian_elem(float a[N][N], float a_inv[N][N]);
void mat_mult(float a[N][N], float b[N][N], float c[N][N]);

#endif
