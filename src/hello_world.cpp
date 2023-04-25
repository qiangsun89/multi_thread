/*
 * @file: 
 * @Author: Qiang Sun
 * @Date: 2023-04-25 13:31:47
 * @LastEditTime: 2023-04-25 17:24:15
 * @version: 
 * @copyright: ROSIWIT Copyright (c) 2023
 * @brief: 
 */
#include <iostream>
#include <thread>

void print_hello(std::string name) {
  std::cout << "Hello " << name << std::endl;
}

int main() {
  // 创建一个新的线程，执行print_hello函数
  std::thread t(print_hello,"Jack");

  // 在主线程中打印一条消息
  std::cout << "Hello from main thread!" << std::endl;

  // 等待子线程执行完成
  t.join();

  return 0;
}