//
// Created by test on 2022-08-10.
//

#ifndef CMAKE_PRACTICE_LIB_FIRST_MY_LIB_FIRSTMYLIB_H_
#define CMAKE_PRACTICE_LIB_FIRST_MY_LIB_FIRSTMYLIB_H_

class FirstMyLib {

 public:
    FirstMyLib();
    FirstMyLib(int a):member(a){};
    int getMember() const;

 private:
  int member;
};

#endif //CMAKE_PRACTICE_LIB_FIRST_MY_LIB_FIRSTMYLIB_H_
