#include "color.h"
#include "vec3.h"

#include <fstream>
#include <iostream>

int main() {
    std::ofstream ppm_file;
    ppm_file.open("render.ppm");

    const int image_width = 256;
    const int image_height = 256;

    ppm_file << "P3\n" << image_width << " " << image_height << "\n255\n";

    for (int j = image_height - 1; j >=0; --j) {
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i) {
            color pixel_color(double(i) / (image_width -1),
                              double(j) / (image_height -1),
                              0.25);

            write_color(ppm_file, pixel_color);
        }
    }

    ppm_file.close();
    std::cerr << "\nDone.\n";
}
