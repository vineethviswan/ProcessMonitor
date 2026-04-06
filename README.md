# Process Monitor

# System Monitor Dashboard

A lightweight Windows Task Manager alternative built with C++ and Dear ImGui. Shows real-time CPU usage, memory stats, and per-process details using native Win32 APIs like PSAPI. Features a responsive ImGui dashboard with threading for smooth performance.

## Features
- Live CPU and system memory monitoring
- Per-process memory and status table with sorting/filtering
- Threaded polling for responsive UI
- Clean, minimal Dear ImGui interface
- Google Test unit testing suite

## Tech Stack
- **Language**: C++17 (modern standards)
- **GUI**: Dear ImGui (immediate mode UI)
- **Testing**: Google Test
- **Platform APIs**: PSAPI, Windows process enumeration
