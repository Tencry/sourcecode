CC = bcc32c
SOURCE_DIR = src/
BUILD_DIR = build/
BUILD_TARGET = -tW
all:
	$(CC) $(BUILD_TARGET) -o $(BUILD_DIR)app $(SOURCE_DIR)*.c
compile:
	$(CC) -c -n$(BUILD_DIR) $(SOURCE_DIR)*.c
link: compile
	$(CC) $(BUILD_TARGET) -o $(BUILD_DIR)app $(BUILD_DIR)*.obj
