// Codes from https://pytorch.org/tutorials/advanced/cpp_frontend.html

#include <torch/torch.h>
#include <iostream>

int main() {
  torch::Tensor tensor = torch::eye(3, at::device(at::kCUDA));
  std::cout << tensor << std::endl;
}
