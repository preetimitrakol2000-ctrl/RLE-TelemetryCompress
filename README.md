# RLE-TelemetryCompress

A lightweight data compression module written in C99 for power-constrained IoT edge devices. By applying **Run-Length Encoding (RLE)** over streaming sensor log files, this utility collapses repetitive data arrays into condensed byte pairs, lowering network transmission power demands.

## 📉 Compression Analytics
* **Algorithmic Strategy:** Linear scanning that groups repeating sequential patterns.
* **Space Complexity:** $O(1)$ constant overhead compression workspace.
* **Data Efficiency Bounds:** Maximizes bandwidth reduction when processing highly repetitive state indicators (e.g., unchanging binary sensor logs).
