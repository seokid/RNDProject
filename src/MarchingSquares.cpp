#include "MarchingSquares.h"

std::vector<Segment> extractSegments(
    const std::vector<std::vector<float>>& field,
    float threshold)
{
    // TODO: 구현
    return {};
}

std::vector<Contour> stitchSegments(
    const std::vector<Segment>& segments)
{
    // TODO: 구현
    return {};
}

std::vector<Contour> extractContours(
    const std::vector<std::vector<float>>& field,
    float threshold)
{
    return stitchSegments(extractSegments(field, threshold));
}
