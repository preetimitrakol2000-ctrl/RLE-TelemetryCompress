#ifndef COMPRESSOR_H
#define COMPRESSOR_H

typedef struct {
    char state_flag;
    int duration_count;
} CompressedToken;

int execute_rle_compression(const char* input_stream, CompressedToken* output_buffer, int max_length);

#endif
