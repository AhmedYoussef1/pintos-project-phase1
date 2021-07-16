#ifndef REAL_NUMBERS_H
#define REAL_NUMBERS_H

struct real {
    int val;
};

struct real int_to_real(int num);
int real_to_int(struct real r);
int real_to_int_round(struct real r);

struct real real_add(struct real r1, struct real r2);
struct real real_sub(struct real r1, struct real r2);
struct real real_mul(struct real r1, struct real r2);
struct real real_mul_int(struct real r, int num);
struct real real_div(struct real r1, struct real r2);
struct real real_div_int(struct real r, int num);

#endif