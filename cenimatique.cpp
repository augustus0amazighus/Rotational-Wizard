#include <iostream>
#include <cmath>


int main() {
    std::cout << "\033[1;32mWelcome to the Circular Motion Calculator!\033[0m\n\n";

    double v, r, m, w, Ac, Fc, alpha, T, t;
    int choice;

    std::cout << "Select the calculation you want to perform:\n"
              << "1 - Calculate Angular Velocity (w)\n"
              << "2 - Calculate Centripetal Acceleration (Ac)\n"
              << "3 - Calculate Centripetal Force (Fc)\n"
              << "4 - Calculate Angular Acceleration (α)\n"
              << "5 - Calculate Time for One Revolution (T)\n"
              << "6 - Calculate Linear Velocity (v) from Angular Velocity\n"
              << "\nEnter your choice (1-6): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "\n--- Calculating Angular Velocity (w) ---\n";
            std::cout << "Enter Linear Velocity (v) [m/s]: ";
            std::cin >> v;
            std::cout << "Enter Radius (r) [m]: ";
            std::cin >> r;
            if (r != 0) {
                w = v / r;
                std::cout << "Angular Velocity (w) = " << w << " rad/s\n\n";
            } else {
                std::cout << "Error: Radius (r) cannot be zero.\n\n";
            }
            break;

        case 2:
            std::cout << "\n--- Calculating Centripetal Acceleration (Ac) ---\n";
            std::cout << "Enter Velocity (v) [m/s]: ";
            std::cin >> v;
            std::cout << "Enter Radius (r) [m]: ";
            std::cin >> r;
            if (r != 0) {
                Ac = (v * v) / r;
                std::cout << "Centripetal Acceleration (Ac) = " << Ac << " m/s²\n\n";
            } else {
                std::cout << "Error: Radius (r) cannot be zero.\n\n";
            }
            break;

        case 3:
            std::cout << "\n--- Calculating Centripetal Force (Fc) ---\n";
            std::cout << "Enter Mass (m) [kg]: ";
            std::cin >> m;
            std::cout << "Enter Velocity (v) [m/s]: ";
            std::cin >> v;
            std::cout << "Enter Radius (r) [m]: ";
            std::cin >> r;
            if (r != 0) {
                Fc = m * (v * v) / r;
                std::cout << "Centripetal Force (Fc) = " << Fc << " N\n\n";
            } else {
                std::cout << "Error: Radius (r) cannot be zero.\n\n";
            }
            break;

        case 4:
            std::cout << "\n--- Calculating Angular Acceleration (α) ---\n";
            double w_initial, w_final;
            std::cout << "Enter Initial Angular Velocity (w_initial) [rad/s]: ";
            std::cin >> w_initial;
            std::cout << "Enter Final Angular Velocity (w_final) [rad/s]: ";
            std::cin >> w_final;
            std::cout << "Enter Time (t) [s]: ";
            std::cin >> t;
            if (t != 0) {
                alpha = (w_final - w_initial) / t;
                std::cout << "Angular Acceleration (α) = " << alpha << " rad/s²\n\n";
            } else {
                std::cout << "Error: Time (t) cannot be zero.\n\n";
            }
            break;

        case 5:
            std::cout << "\n--- Calculating Time for One Revolution (T) ---\n";
            std::cout << "Enter Angular Velocity (w) [rad/s]: ";
            std::cin >> w;
            if (w != 0) {
                T = 2 * M_PI / w;
                std::cout << "Time for One Revolution (T) = " << T << " seconds\n\n";
            } else {
                std::cout << "Error: Angular Velocity (w) cannot be zero.\n\n";
            }
            break;

        case 6:
            std::cout << "\n--- Calculating Linear Velocity (v) from Angular Velocity ---\n";
            std::cout << "Enter Angular Velocity (w) [rad/s]: ";
            std::cin >> w;
            std::cout << "Enter Radius (r) [m]: ";
            std::cin >> r;
            if (r != 0) {
                v = w * r;
                std::cout << "Linear Velocity (v) = " << v << " m/s\n\n"; }
            else {
                std::cout << "Error: Radius (r) cannot be zero.\n\n";}
            break;

        default:
            std::cout << "Invalid choice. Please select a valid option.\n\n";
            break;
    }

    return 0;
}
