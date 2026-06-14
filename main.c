#include <stdio.h>
#include "compressor.h"

int main() {
    printf("🗜️ Activating RLE-TelemetryCompress Real-Time Encoder Hub...\n\n");

    // Simulated steady network event flags (e.g., N=Normal status, A=Anomaly event alert flag)
    const char* raw_hardware_logs = "NNNNNNNNAANNNNNN";
    printf("📥 Ingesting Raw Telemetry Stream String: \"%s\"\n", raw_hardware_logs);

    CompressedToken compression_out[10];
    int token_count = execute_rle_compression(raw_hardware_logs, compression_out, 10);

    printf("\n🔮 Encoded Compressed Data Output Map:\n");
    for (int i = 0; i < token_count; i++) {
        printf("   • Token Element Layer [%d] ---> Target State: '%c' | Sequence Count Length: %d\n", 
               i, compression_out[i].state_flag, compression_out[i].duration_count);
    }

    // Mathematical storage reduction evaluation step
    int uncompressed_bytes = 16; // Length of raw string input array
    int compressed_bytes = token_count * sizeof(CompressedToken);
    printf("\n📊 Resource Savings Review: Raw String Size = %d Bytes | Compressed Buffer footprint = %d Bytes\n", 
           uncompressed_bytes, compressed_bytes);

    return 0;
}
