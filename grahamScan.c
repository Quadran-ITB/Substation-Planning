// Muhammad Ogin Hasanuddin
// Algoritma Graham Scan


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

// Fungsi untuk mencari titik paling bawah
int findLowestPoint(Point points[], int n) {
    int lowest = 0;
    for (int i = 0; i < n; i++) {
        if (points[i].y < points[lowest].y) {
            lowest = i;
        } // else tidak melakukan apapun
    }
    return lowest;
}

// Fungsi untuk menghitung sudut antara tiga titik
int orientation(Point p1, Point p2, Point p3) {
    int val = (p2.y - p1.y) * (p3.x - p2.x) - (p2.x - p1.x) * (p3.y - p2.y);
    if (val == 0) {
        return 0;
    }
    return (val > 0) ? 1 : -1;
}

int main() {
    // Contoh input titik koordinat
    Point points[] = {{0, 0}, {0, 4}, {4, 4}, {4, 0}, {2, 2}, {1, 1}, {3, 3}};

    // instruksi untuk menghitung banyaknya point
    int banyaknyaPoint = sizeof(points)/sizeof(points[0]);

    int lowestPoint = findLowestPoint(points, banyaknyaPoint);

    int sudut = orientation(points[0], points[1], points[2]);

    printf("jumlah point: %d\n", banyaknyaPoint);
    printf("point terbawah: %d\n", lowestPoint);
    printf("sudut: %d\n", sudut);

    return 0;
}


