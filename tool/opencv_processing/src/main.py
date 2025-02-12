import sys
import os

# Get the absolute path of the opencv_processing directory
current_dir = os.path.dirname(os.path.abspath(__file__))
opencv_processing_dir = os.path.dirname(os.path.dirname(current_dir))
project_root = os.path.dirname(opencv_processing_dir)

# Add the project root to Python path
sys.path.insert(0, project_root)

from PyQt5.QtWidgets import QApplication
from tool.opencv_processing.ui.main_window import MainWindow

def main():
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main() 