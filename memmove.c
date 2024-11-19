#include <stddef.h>  // For size_t

void *ft_memmove(void *dest, const void *src, size_t num) {
    // Create char pointers for byte-by-byte copying
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    
    if (d == s) {
        return dest;  // If source and destination are the same, no action needed
    }
    
    // Handle overlapping memory: copy from end to start or from start to end
    if (d < s || d >= s + num) {
        // No overlap or destination is completely after the source
        for (size_t i = 0; i < num; i++) {
            d[i] = s[i];
        }
    } else {
        // Overlapping regions, copy from the end to avoid overwriting data
        for (size_t i = num; i > 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }
    
    return dest;
}
