/*
* Name : Mohammad Burair 
* Roll Number : 24K - 0775
* Section : BCS-1C
* Date : 23/ November / 2024
* Desc : Program that uses function to input the corner points of rectange and one random point. The program also tell the distance between corner points 
         using a function and also tells if the random point is insider the rectangle or not 
*/
#include <stdio.h>
#include <math.h>

struct space {
    float xpos;
    float ypos;
};

void input_space(struct space *s) {
    printf("Enter the X coordinate of the point: ");
    scanf("%f", &(s->xpos));
    printf("Enter the Y coordinate of the point: ");
    scanf("%f", &(s->ypos));
}

float distance_bwpoints(struct space *p1, struct space *p2) {
    return sqrt(pow((p2->xpos - p1->xpos), 2) + pow((p2->ypos - p1->ypos), 2));
}

int main() {
    struct space p[5];

    printf("Enter the corner points of the rectangle:\n");
    printf("The points are in this order:\n");
    printf(".p1()...........................................p2()\n");
    printf(".                                              .\n");
    printf(".                                              .\n");
    printf(".                                              .\n");
    printf(".                                              .\n");
    printf(".p3()...........................................p4()\n");

    for (int i = 0; i < 4; i++) {
        printf("For Corner Point %d:\n", i + 1);
        input_space(&p[i]);
    }

    printf("Enter any random point:\n");
    input_space(&p[4]);

    
    printf("Distance between Point 1 and Point 2: %.2f\n", distance_bwpoints(&p[0], &p[1]));
    printf("Distance between Point 1 and Point 3: %.2f\n", distance_bwpoints(&p[0], &p[2]));
    printf("Distance between Point 2 and Point 4: %.2f\n", distance_bwpoints(&p[1], &p[3]));
    printf("Distance between Point 3 and Point 4: %.2f\n", distance_bwpoints(&p[2], &p[3]));

    
    if (p[4].xpos > p[0].xpos && p[4].xpos < p[1].xpos &&
        p[4].ypos > p[2].ypos && p[4].ypos < p[0].ypos) {
        printf("The point is inside the rectangle\n");
    } else {
        printf("The point is outside the rectangle\n");
    }

    return 0;
}

