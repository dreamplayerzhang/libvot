
/** \file opencv_libvot_api.h
 *	\brief libvot-side APIs of opencv feature
 *
 * 	It contains Some utility functions for the use of opencv in libvot
 */
#ifndef OPENCV_LIBVOT_API_H
#define OPENCV_LIBVOT_API_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/nonfree/features2d.hpp>

namespace vot {
class SiftData;

bool OpencvKeyPoints2libvotSift(std::vector<cv::KeyPoint> &key_points,
                                cv::Mat &descriptors,
                                SiftData &sift_data);

bool LibvotSift2OpencvKeyPoints(SiftData &sift_data,
                                std::vector<cv::KeyPoint> &key_points,
                                cv::Mat &descriptors);
}	// end of namespace tw

#endif
