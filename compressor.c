#include "compressor.h"

int execute_rle_compression(const char* input_stream, CompressedToken* output_buffer, int max_length) {
    if (input_stream[0] == '\0' || max_length <= 0) return 0;

    int input_idx = 0;
    int buffer_write_idx = 0;

    while (input_stream[input_idx] != '\0' && buffer_write_idx < max_length) {
        output_buffer[buffer_write_idx].state_flag = input_stream[input_idx];
        output_buffer[buffer_write_idx].duration_count = 1;

        // Count consecutive matching characters in the telemetry stream
        while (input_stream[input_idx] == input_stream[input_idx + 1]) {
            output_buffer[buffer_write_idx].duration_count++;
            input_idx++;
        }
        
        input_idx++;
        buffer_write_idx++;
    }
    return buffer_write_idx; // Return total number of compressed pairs written
}
