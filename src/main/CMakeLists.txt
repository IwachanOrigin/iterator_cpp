
set(MAIN_SRC
  main.cpp
  aggregate.h
  aggregate.cpp
  iterator.h
  iterator.cpp
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

