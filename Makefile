# Define paths
PREBUILT_HEADERS := $(shell pwd)/prebuilts/kernel-headers
OUTPUT_DIR := $(O)

headers_install:
	@echo "Installing prebuilt kernel headers..."
	@mkdir -p $(OUTPUT_DIR)
	@cp -r $(PREBUILT_HEADERS)/* $(OUTPUT_DIR)/
	@echo "Kernel headers installed successfully"

.PHONY: headers_install