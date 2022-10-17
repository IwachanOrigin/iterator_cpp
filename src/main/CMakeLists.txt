
set(main_src
  main.cpp
  birthdaybase.h
  birthdaybase.cpp
  birthdaycakefactory.h
  birthdaycakefactory.cpp
  birthdaydecoration.h
  birthdaydecoration.cpp
  birthdayfruit.h
  birthdayfruit.cpp
  cakebase.h
  decocakefactory.h
  decoration.h
  fruit.h
  xmasbase.h
  xmasbase.cpp
  xmascakefactory.h
  xmascakefactory.cpp
  xmasdecoration.h
  xmasdecoration.cpp
  xmasfruit.h
  xmasfruit.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${main_src}
)

