#include <iostream>
#include <cmath>
double System_Hypotenuse_Function(double System_Variabel_Left, double System_Variabel_Bottom, double System_Phi_Angle);
double System_Theta_Angle_Calculation(double System_Parameter_Left, double System_Parameter_Bottom);
void System_Return_Text_1();
void System_Return_Text_2();
void System_Return_Text_3(double System_Parameter_Variabel_A, double System_Parameter_Variabel_B, double System_Parameter_Variabel_Phi);
void System_Return_Text_4();
void System_Return_Text_5(double System_Parameter_Variabel_A, double System_Parameter_Variabel_B);
int main() {
  double System_Parameter_Variabel_A;
  double System_Parameter_Variabel_B;
  double System_Parameter_Variabel_Phi;
  std::cout << "========================= \n" << std::endl;
  std::cout << "     AFTERBASIC PROGRAM    " << std::endl;
  std::cout << "========================= \n" << std::endl;
  System_Return_Text_1();
  std::cin >> System_Parameter_Variabel_A;
  System_Return_Text_2();
  std::cin >> System_Parameter_Variabel_B;
  System_Return_Text_4();
  std::cin >> System_Parameter_Variabel_Phi;
  System_Return_Text_3(System_Parameter_Variabel_A, System_Parameter_Variabel_B, System_Parameter_Variabel_Phi);
  System_Return_Text_5(System_Parameter_Variabel_A, System_Parameter_Variabel_B);
  for(int System_Parameter_Index = 1;
  System_Parameter_Index <= System_Parameter_Variabel_B; System_Parameter_Index = (System_Parameter_Index +(1)))
    {
        for(int System_Parameter_Index_xb626 = 1; System_Parameter_Index_xb626 <= System_Parameter_Index; System_Parameter_Index_xb626 = (System_Parameter_Index_xb626 + (1)))
        {
            std::cout << "x";
        }
        std::cout << "\n";
    }
  std::cin.get();
  return 0;
}
double System_Hypotenuse_Function(double System_Variabel_Left, double System_Variabel_Bottom, double System_Phi_Angle) {
  double System_Hypotenuse_Function;
  double System_cosinus_function;
  double System_π_parameter;
  double System_Return_Hypotenuse_Function;
  System_π_parameter = atan(1) * (4);
  System_cosinus_function = cos(System_Phi_Angle) * (System_π_parameter/(180));
  System_Hypotenuse_Function = (System_Variabel_Left * System_Variabel_Left) + (System_Variabel_Bottom * System_Variabel_Bottom ) - (2 * (System_Variabel_Left) * (System_Variabel_Bottom) * System_cosinus_function);
  System_Return_Hypotenuse_Function = sqrt(System_Hypotenuse_Function);
  return System_Return_Hypotenuse_Function;
}
double System_Theta_Angle_Calculation(double System_Parameter_Left, double System_Parameter_Bottom) {
  //tan^-(b/a). output will be an radians.
  double System_Angle_Function;
  double system_pi_function;
  system_pi_function = (atan(1) * (4));
  System_Angle_Function = (atan(System_Parameter_Left/(System_Parameter_Bottom))) *(180/(system_pi_function));
  return System_Angle_Function;
}
void System_Return_Text_1() {
  std::cout << "Masukan nilai sudut kiri: " << std::endl;
  return;
}
void System_Return_Text_2() {
  std::cout << "Masukan nilai sudut bawah: " << std::endl;
}
void System_Return_Text_3(double System_Parameter_Variabel_A, double System_Parameter_Variabel_B, double System_Parameter_Variabel_Phi) {
  std::cout << "//console message: hasil = " << System_Hypotenuse_Function(System_Parameter_Variabel_A, System_Parameter_Variabel_B, System_Parameter_Variabel_Phi) << std::endl;
  return;
}
void System_Return_Text_4() {
  std::cout << "//console message: Masukan nilai sudut phi: " << std::endl;
  return;
}
void System_Return_Text_5(double System_Parameter_Variabel_A, double System_Parameter_Variabel_B) {
  std::cout << "//Console: The theta angle is: " << System_Theta_Angle_Calculation(System_Parameter_Variabel_A, System_Parameter_Variabel_B) << std::endl;
  return;
}