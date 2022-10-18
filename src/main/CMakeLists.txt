
set(MAIN_SRC
  main.cpp
  aggregate.h
  iterator.h
  iteratormachine.h
  iteratormachine.cpp
  machine.h
  machine.cpp
  parts.h
  parts.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

