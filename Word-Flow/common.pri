PROJECT_ROOT_PATH = $${PWD}/

linux-g++: OS_SUFFIX = linux


BIN_PATH = $${PROJECT_ROOT_PATH}/bin/$${TARGET}/

BUILD_PATH = $${PROJECT_ROOT_PATH}/build/
RCC_DIR = $${BUILD_PATH}/rcc/
UI_DIR = $${BUILD_PATH}/ui/
MOC_DIR = $${BUILD_PATH}/moc/
OBJECTS_DIR = $${BUILD_PATH}/obj/

linux-g++:
