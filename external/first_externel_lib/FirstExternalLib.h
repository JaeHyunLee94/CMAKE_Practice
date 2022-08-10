//
// Created by test on 2022-08-10.
//

#ifndef CMAKE_PRACTICE_EXTERNAL_FIRST_EXTERNEL_LIB_FIRSTEXTERNALLIB_H_
#define CMAKE_PRACTICE_EXTERNAL_FIRST_EXTERNEL_LIB_FIRSTEXTERNALLIB_H_

class FirstExternalLib {


 public:
  FirstExternalLib();
  FirstExternalLib(int a):member(a){};
  int getMember() const;

  private:

  int member;
};

#endif //CMAKE_PRACTICE_EXTERNAL_FIRST_EXTERNEL_LIB_FIRSTEXTERNALLIB_H_
