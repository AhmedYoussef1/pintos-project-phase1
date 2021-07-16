#include "threads/real-numbers.h"
#include <inttypes.h>
#include <debug.h>

const int real_f = 16384; // 2^14

struct real int_to_real(int num) {
    struct real r;
    r.val = num * real_f;
    return r;
}

int real_to_int(struct real r) {
    return r.val / real_f;
}

int real_to_int_round(struct real r) {
    if(r.val >= 0)
        return (r.val + real_f/2) / real_f;
    else
        return (r.val - real_f/2) / real_f;
}

struct real real_add(struct real r1, struct real r2) {
    struct real result;
    result.val = r1.val + r2.val;
    return result;
}

struct real real_sub(struct real r1, struct real r2) {
    struct real result;
    result.val = r1.val - r2.val;
    return result;
}

struct real real_mul(struct real r1, struct real r2) {
    struct real result;
    result.val = ((int64_t) r1.val) * r2.val / real_f;
    return result;
}

struct real real_mul_int(struct real r, int num) {
    struct real result;
    result.val = r.val * num;
    return result;
}

struct real real_div(struct real r1, struct real r2) {
    ASSERT(r2.val != 0);
    
    struct real result;
    result.val = ((int64_t) r1.val) * real_f/ r2.val;
    return result;
}

struct real real_div_int(struct real r, int num) {
    ASSERT(num != 0);

    struct real result;
    result.val = r.val / num;
    return result;
}