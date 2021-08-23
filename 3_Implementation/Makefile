PROJ_NAME = Thunderbirds
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = build

ifdef OS
	RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


SRC = src/freq.c\
src/parameter.c\
src/power_input.c\
src/power_output.c\
src/resistance.c\
src/secondary_turns.c\
src/speed.c\
src/torque.c\
src/Load_current.c\
src/Factor_s.c\
src/parallel.c\
src/series.c\
src/halfadder.c\
src/halfsubtractor.c\
src/DutyCycle.c\
src/kvl.c\
src/kcl.c\
src/ohm.c\
src/tensiles.c\
src/trace_width.c\
src/starDeltaConversion.c\
src/division.c\
src/CircularConvolution.c\
src/resistance_calculator.c


TEST_SRC = \
test/test_Thunderbirds.c \
test/unity.c\


INC = \
-Iinc \
-Itest \

TEST_INC = \
test\


all: $(SRC) $(BUILD_DIR)
	gcc $(SRC) main.c $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) -lm

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test_build: $(SRC) $(TEST_SRC) $(BUILD_DIR)
	gcc $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) -lm



test: test_build
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

#Coverage
coverage:
	cp test/test_Thunderbirds.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC) test/unity.c test/Test_Thunderbirds.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC)) 
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) Test_Thunderbirds.c

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)