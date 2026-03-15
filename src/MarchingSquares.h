#pragma once
#include <vector>

// 2D 부동소수점 좌표
struct Point2f {
    float x, y;
};

// 셀에서 추출된 선분 하나
struct Segment {
    Point2f p0, p1;
};

// 이어붙인 외곽선 (점의 순서 있는 목록)
using Contour = std::vector<Point2f>;

// 2D 스칼라 필드에서 Marching Squares 세그먼트를 추출한다.
// field     : row-major 2D 배열 (field[y][x])
// threshold : 이 값 이상이면 "내부"로 판정
// 반환값    : 추출된 raw 선분 목록 (아직 이어붙이기 전)
std::vector<Segment> extractSegments(
    const std::vector<std::vector<float>>& field,
    float threshold = 0.5f
);

// 선분 목록을 이어붙여 외곽선(Contour) 목록으로 변환한다.
std::vector<Contour> stitchSegments(
    const std::vector<Segment>& segments
);

// 위 두 함수를 한 번에 호출하는 편의 함수
std::vector<Contour> extractContours(
    const std::vector<std::vector<float>>& field,
    float threshold = 0.5f
);
