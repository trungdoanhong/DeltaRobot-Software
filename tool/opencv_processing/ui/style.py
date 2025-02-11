from PyQt5.QtGui import QColor, QLinearGradient, QGradient

# Color palette
BACKGROUND_COLOR = QColor(28, 31, 38)
NODE_COLOR = QColor(45, 48, 56)
NODE_SELECTED_COLOR = QColor(58, 61, 79)
NODE_TITLE_COLOR = QColor(82, 148, 226)
PORT_COLOR = QColor(82, 148, 226)
PORT_HOVER_COLOR = QColor(0, 217, 255)
CONNECTION_COLOR = QColor(82, 148, 226)
TEXT_COLOR = QColor(255, 255, 255)
GRID_COLOR = QColor(35, 38, 45)

# Gradients
def create_node_gradient():
    gradient = QLinearGradient(0, 0, 0, 1)
    gradient.setCoordinateMode(QGradient.ObjectBoundingMode)
    gradient.setColorAt(0, QColor(55, 58, 66))
    gradient.setColorAt(1, NODE_COLOR)
    return gradient

# Styles
MAIN_STYLE = """
QMainWindow {
    background-color: #1C1F26;
}

QToolBar {
    background-color: #2D3038;
    border: none;
    spacing: 3px;
    padding: 6px;
}

QToolBar QToolButton {
    background-color: #383B4F;
    color: white;
    border: none;
    border-radius: 4px;
    padding: 12px;
    margin: 2px;
    font-size: 12px;
    min-width: 80px;
    text-align: center;
}

QToolBar QToolButton:hover {
    background-color: #434760;
}

QToolBar QToolButton:pressed {
    background-color: #525E82;
}

QToolBar::separator {
    background-color: #434760;
    width: 1px;
    margin: 6px 4px;
}

QGraphicsView {
    border: none;
}

QMenu {
    background-color: #2D3038;
    color: white;
    border: 1px solid #383B4F;
    border-radius: 5px;
    padding: 5px;
}

QMenu::item {
    padding: 8px 24px;
    border-radius: 3px;
}

QMenu::item:selected {
    background-color: #383B4F;
}

QScrollBar:horizontal, QScrollBar:vertical {
    background-color: #2D3038;
    border: none;
    border-radius: 6px;
    margin: 2px;
}

QScrollBar::handle:horizontal, QScrollBar::handle:vertical {
    background-color: #383B4F;
    border-radius: 5px;
    min-width: 20px;
    min-height: 20px;
    margin: 2px;
}

QScrollBar::handle:horizontal:hover, QScrollBar::handle:vertical:hover {
    background-color: #434760;
}

QScrollBar::add-line, QScrollBar::sub-line {
    border: none;
    background: none;
    height: 0px;
    width: 0px;
}

QScrollBar::add-page, QScrollBar::sub-page {
    background: none;
}
""" 