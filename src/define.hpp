/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

// System numbers
#define WINDOW_NAME "Sopromat app"           // System game name
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800


// Base file names
#define SETTING_FILE "settings7.ini"        // File with all starting data (width, height...)
#define DATA_FILE "data7.dat"               // File with all GFX

// Macroses
#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)
#define SET_MIN(value, min) (value = value < min ? min : value)
#define SET_MAX(value, max) (value = value > max ? max : value)
#define sqr(value) ((value) * (value))
