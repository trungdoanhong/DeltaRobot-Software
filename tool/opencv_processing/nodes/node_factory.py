from .source_nodes import CameraNode, ImageNode, VideoNode
from .processing_nodes import (ResizeNode, WarpPerspectiveNode, CropNode,
                             HSVFilterNode, ContourNode, DrawContoursNode, ContourInfoNode)
from .output_nodes import DisplayNode, SaveNode

class NodeFactory:
    def __init__(self):
        self.node_types = {
            'source:Camera': CameraNode,
            'source:Image': ImageNode,
            'source:Video': VideoNode,
            'processing:Resize': ResizeNode,
            'processing:Warp': WarpPerspectiveNode,
            'processing:Crop': CropNode,
            'processing:HSV': HSVFilterNode,
            'processing:Contours': ContourNode,
            'processing:DrawContours': DrawContoursNode,
            'processing:ContourInfo': ContourInfoNode,
            'output:Display': DisplayNode,
            'output:Save': SaveNode
        }
    
    def create_node(self, node_type):
        if node_type in self.node_types:
            return self.node_types[node_type]()
        return None 