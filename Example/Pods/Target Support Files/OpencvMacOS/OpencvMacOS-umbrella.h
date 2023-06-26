#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AdaptiveManifoldFilter.h"
#import "AffineFeature.h"
#import "AffineFeature2D.h"
#import "AgastFeatureDetector.h"
#import "AKAZE.h"
#import "Algorithm.h"
#import "AlignExposures.h"
#import "AlignMTB.h"
#import "ANN_MLP.h"
#import "ArrayUtil.h"
#import "Aruco.h"
#import "aruco.hpp"
#import "aruco_calib.hpp"
#import "charuco.hpp"
#import "ArucoDetector.h"
#import "AverageHash.h"
#import "BackgroundSubtractor.h"
#import "BackgroundSubtractorCNT.h"
#import "BackgroundSubtractorGMG.h"
#import "BackgroundSubtractorGSOC.h"
#import "BackgroundSubtractorKNN.h"
#import "BackgroundSubtractorLSBP.h"
#import "BackgroundSubtractorLSBPDesc.h"
#import "BackgroundSubtractorMOG.h"
#import "BackgroundSubtractorMOG2.h"
#import "BarcodeDetector.h"
#import "BaseCascadeClassifier.h"
#import "BaseOCR.h"
#import "BasicFaceRecognizer.h"
#import "BEBLID.h"
#import "BFMatcher.h"
#import "Bgsegm.h"
#import "bgsegm.hpp"
#import "BIF.h"
#import "Bioinspired.h"
#import "bioinspired.hpp"
#import "bioinspired.hpp"
#import "retina.hpp"
#import "retinafasttonemapping.hpp"
#import "transientareassegmentationmodule.hpp"
#import "BlockMeanHash.h"
#import "Board.h"
#import "Boost.h"
#import "BoostDesc.h"
#import "BOWImgDescriptorExtractor.h"
#import "BOWKMeansTrainer.h"
#import "BOWTrainer.h"
#import "BriefDescriptorExtractor.h"
#import "BRISK.h"
#import "ByteVector.h"
#import "Calib3d.h"
#import "calib3d.hpp"
#import "calib3d.hpp"
#import "calib3d_c.h"
#import "CalibrateCRF.h"
#import "CalibrateDebevec.h"
#import "CalibrateRobertson.h"
#import "CascadeClassifier.h"
#import "ccalib.hpp"
#import "multicalib.hpp"
#import "omnidir.hpp"
#import "randpattern.hpp"
#import "CharucoBoard.h"
#import "CharucoDetector.h"
#import "CharucoParameters.h"
#import "CirclesGridFinderParameters.h"
#import "CLAHE.h"
#import "ClassificationModel.h"
#import "ColorMomentHash.h"
#import "ContourFitting.h"
#import "Converters.h"
#import "Core.h"
#import "core.hpp"
#import "affine.hpp"
#import "async.hpp"
#import "base.hpp"
#import "bindings_utils.hpp"
#import "bufferpool.hpp"
#import "check.hpp"
#import "core.hpp"
#import "core_c.h"
#import "cuda.hpp"
#import "cuda.inl.hpp"
#import "block.hpp"
#import "border_interpolate.hpp"
#import "color.hpp"
#import "common.hpp"
#import "datamov_utils.hpp"
#import "color_detail.hpp"
#import "reduce.hpp"
#import "reduce_key_val.hpp"
#import "transform_detail.hpp"
#import "type_traits_detail.hpp"
#import "vec_distance_detail.hpp"
#import "dynamic_smem.hpp"
#import "emulation.hpp"
#import "filters.hpp"
#import "funcattrib.hpp"
#import "functional.hpp"
#import "limits.hpp"
#import "reduce.hpp"
#import "saturate_cast.hpp"
#import "scan.hpp"
#import "simd_functions.hpp"
#import "transform.hpp"
#import "type_traits.hpp"
#import "utility.hpp"
#import "vec_distance.hpp"
#import "vec_math.hpp"
#import "vec_traits.hpp"
#import "warp.hpp"
#import "warp_reduce.hpp"
#import "warp_shuffle.hpp"
#import "cuda_stream_accessor.hpp"
#import "cuda_types.hpp"
#import "cvdef.h"
#import "cvstd.hpp"
#import "cvstd.inl.hpp"
#import "cvstd_wrapper.hpp"
#import "cv_cpu_dispatch.h"
#import "cv_cpu_helper.h"
#import "async_promise.hpp"
#import "dispatch_helper.impl.hpp"
#import "exception_ptr.hpp"
#import "directx.hpp"
#import "dualquaternion.hpp"
#import "dualquaternion.inl.hpp"
#import "eigen.hpp"
#import "fast_math.hpp"
#import "hal.hpp"
#import "interface.h"
#import "intrin.hpp"
#import "intrin_avx.hpp"
#import "intrin_avx512.hpp"
#import "intrin_cpp.hpp"
#import "intrin_forward.hpp"
#import "intrin_lasx.hpp"
#import "intrin_msa.hpp"
#import "intrin_neon.hpp"
#import "intrin_rvv.hpp"
#import "intrin_rvv071.hpp"
#import "intrin_rvv_010_compat_non-policy.hpp"
#import "intrin_rvv_010_compat_overloaded-non-policy.hpp"
#import "intrin_rvv_compat_overloaded.hpp"
#import "intrin_rvv_scalable.hpp"
#import "intrin_sse.hpp"
#import "intrin_sse_em.hpp"
#import "intrin_vsx.hpp"
#import "intrin_wasm.hpp"
#import "msa_macros.h"
#import "simd_utils.impl.hpp"
#import "mat.hpp"
#import "mat.inl.hpp"
#import "matx.hpp"
#import "neon_utils.hpp"
#import "ocl.hpp"
#import "ocl_genbase.hpp"
#import "ocl_defs.hpp"
#import "opencl_info.hpp"
#import "opencl_svm.hpp"
#import "opencl_clblas.hpp"
#import "opencl_clfft.hpp"
#import "opencl_core.hpp"
#import "opencl_core_wrappers.hpp"
#import "opencl_gl.hpp"
#import "opencl_gl_wrappers.hpp"
#import "opencl_clblas.hpp"
#import "opencl_clfft.hpp"
#import "opencl_core.hpp"
#import "opencl_core_wrappers.hpp"
#import "opencl_gl.hpp"
#import "opencl_gl_wrappers.hpp"
#import "opencl_svm_20.hpp"
#import "opencl_svm_definitions.hpp"
#import "opencl_svm_hsa_extension.hpp"
#import "opengl.hpp"
#import "operations.hpp"
#import "optim.hpp"
#import "ovx.hpp"
#import "parallel_for.openmp.hpp"
#import "parallel_for.tbb.hpp"
#import "parallel_backend.hpp"
#import "persistence.hpp"
#import "quaternion.hpp"
#import "quaternion.inl.hpp"
#import "saturate.hpp"
#import "simd_intrinsics.hpp"
#import "softfloat.hpp"
#import "sse_utils.hpp"
#import "traits.hpp"
#import "types.hpp"
#import "types_c.h"
#import "utility.hpp"
#import "allocator_stats.hpp"
#import "allocator_stats.impl.hpp"
#import "filesystem.hpp"
#import "fp_control_utils.hpp"
#import "instrumentation.hpp"
#import "logger.defines.hpp"
#import "logger.hpp"
#import "logtag.hpp"
#import "tls.hpp"
#import "trace.hpp"
#import "va_intel.hpp"
#import "version.hpp"
#import "vsx_utils.hpp"
#import "core_detect.hpp"
#import "cvconfig.h"
#import "CVObjcUtil.h"
#import "CvType.h"
#import "DAISY.h"
#import "ar_hmdb.hpp"
#import "ar_sports.hpp"
#import "dataset.hpp"
#import "fr_adience.hpp"
#import "fr_lfw.hpp"
#import "gr_chalearn.hpp"
#import "gr_skig.hpp"
#import "hpe_humaneva.hpp"
#import "hpe_parse.hpp"
#import "ir_affine.hpp"
#import "ir_robot.hpp"
#import "is_bsds.hpp"
#import "is_weizmann.hpp"
#import "msm_epfl.hpp"
#import "msm_middlebury.hpp"
#import "or_imagenet.hpp"
#import "or_mnist.hpp"
#import "or_pascal.hpp"
#import "or_sun.hpp"
#import "pd_caltech.hpp"
#import "pd_inria.hpp"
#import "slam_kitti.hpp"
#import "slam_tumindoor.hpp"
#import "sr_bsds.hpp"
#import "sr_div2k.hpp"
#import "sr_general100.hpp"
#import "track_alov.hpp"
#import "track_vot.hpp"
#import "tr_chars.hpp"
#import "tr_icdar.hpp"
#import "tr_svt.hpp"
#import "util.hpp"
#import "DenseOpticalFlow.h"
#import "DescriptorMatcher.h"
#import "DetectionModel.h"
#import "DetectorParameters.h"
#import "Dictionary.h"
#import "DictValue.h"
#import "DISOpticalFlow.h"
#import "DisparityFilter.h"
#import "DisparityWLSFilter.h"
#import "DMatch.h"
#import "Dnn.h"
#import "dnn.hpp"
#import "all_layers.hpp"
#import "dict.hpp"
#import "dnn.hpp"
#import "dnn.inl.hpp"
#import "layer.details.hpp"
#import "layer.hpp"
#import "shape_utils.hpp"
#import "debug_utils.hpp"
#import "inference_engine.hpp"
#import "version.hpp"
#import "dnn_superres.hpp"
#import "Double2.h"
#import "Double3.h"
#import "DoubleVector.h"
#import "dpm.hpp"
#import "DTFilter.h"
#import "DTrees.h"
#import "EdgeAwareInterpolator.h"
#import "EdgeBoxes.h"
#import "EdgeDrawing.h"
#import "EdgeDrawingParams.h"
#import "EigenFaceRecognizer.h"
#import "EM.h"
#import "ERFilter.h"
#import "ERFilterCallback.h"
#import "EstimateParameters.h"
#import "Face.h"
#import "face.hpp"
#import "bif.hpp"
#import "facemark.hpp"
#import "facemarkAAM.hpp"
#import "facemarkLBF.hpp"
#import "facemark_train.hpp"
#import "facerec.hpp"
#import "face_alignment.hpp"
#import "mace.hpp"
#import "predict_collector.hpp"
#import "FaceDetectorYN.h"
#import "Facemark.h"
#import "FacemarkAAM.h"
#import "FacemarkKazemi.h"
#import "FacemarkLBF.h"
#import "FacemarkTrain.h"
#import "FaceRecognizer.h"
#import "FaceRecognizerSF.h"
#import "FarnebackOpticalFlow.h"
#import "FastBilateralSolverFilter.h"
#import "FastFeatureDetector.h"
#import "FastGlobalSmootherFilter.h"
#import "FastLineDetector.h"
#import "Feature2D.h"
#import "Features2d.h"
#import "features2d.hpp"
#import "features2d.hpp"
#import "interface.h"
#import "FisherFaceRecognizer.h"
#import "flann.hpp"
#import "allocator.h"
#import "all_indices.h"
#import "any.h"
#import "autotuned_index.h"
#import "composite_index.h"
#import "config.h"
#import "defines.h"
#import "dist.h"
#import "dummy.h"
#import "dynamic_bitset.h"
#import "flann.hpp"
#import "flann_base.hpp"
#import "general.h"
#import "ground_truth.h"
#import "hdf5.h"
#import "heap.h"
#import "hierarchical_clustering_index.h"
#import "index_testing.h"
#import "kdtree_index.h"
#import "kdtree_single_index.h"
#import "kmeans_index.h"
#import "linear_index.h"
#import "logger.h"
#import "lsh_index.h"
#import "lsh_table.h"
#import "matrix.h"
#import "miniflann.hpp"
#import "nn_index.h"
#import "object_factory.h"
#import "params.h"
#import "random.h"
#import "result_set.h"
#import "sampling.h"
#import "saving.h"
#import "simplex_downhill.h"
#import "timer.h"
#import "FlannBasedMatcher.h"
#import "Float4.h"
#import "Float6.h"
#import "FloatVector.h"
#import "FREAK.h"
#import "fuzzy.hpp"
#import "fuzzy_F0_math.hpp"
#import "fuzzy_F1_math.hpp"
#import "fuzzy_image.hpp"
#import "types.hpp"
#import "gapi.hpp"
#import "core.hpp"
#import "core.hpp"
#import "gcpukernel.hpp"
#import "imgproc.hpp"
#import "stereo.hpp"
#import "video.hpp"
#import "core.hpp"
#import "gfluidbuffer.hpp"
#import "gfluidkernel.hpp"
#import "imgproc.hpp"
#import "garg.hpp"
#import "garray.hpp"
#import "gasync_context.hpp"
#import "gcall.hpp"
#import "gcommon.hpp"
#import "gcompiled.hpp"
#import "gcompiled_async.hpp"
#import "gcompoundkernel.hpp"
#import "gcomputation.hpp"
#import "gcomputation_async.hpp"
#import "gframe.hpp"
#import "gkernel.hpp"
#import "gmat.hpp"
#import "gmetaarg.hpp"
#import "gopaque.hpp"
#import "gproto.hpp"
#import "core.hpp"
#import "ggpukernel.hpp"
#import "imgproc.hpp"
#import "gscalar.hpp"
#import "gstreaming.hpp"
#import "gtransform.hpp"
#import "gtyped.hpp"
#import "gtype_traits.hpp"
#import "imgproc.hpp"
#import "infer.hpp"
#import "bindings_ie.hpp"
#import "bindings_onnx.hpp"
#import "bindings_ov.hpp"
#import "ie.hpp"
#import "onnx.hpp"
#import "ov.hpp"
#import "parsers.hpp"
#import "media.hpp"
#import "infer.hpp"
#import "oak.hpp"
#import "core.hpp"
#import "goclkernel.hpp"
#import "imgproc.hpp"
#import "opencv_includes.hpp"
#import "operators.hpp"
#import "assert.hpp"
#import "convert.hpp"
#import "cvdefs.hpp"
#import "exports.hpp"
#import "mat.hpp"
#import "saturate.hpp"
#import "scalar.hpp"
#import "types.hpp"
#import "core.hpp"
#import "gplaidmlkernel.hpp"
#import "plaidml.hpp"
#import "python.hpp"
#import "render.hpp"
#import "render.hpp"
#import "render_types.hpp"
#import "rmat.hpp"
#import "s11n.hpp"
#import "base.hpp"
#import "stereo.hpp"
#import "cap.hpp"
#import "desync.hpp"
#import "format.hpp"
#import "gstreamerpipeline.hpp"
#import "gstreamersource.hpp"
#import "meta.hpp"
#import "accel_types.hpp"
#import "cfg_params.hpp"
#import "data_provider_interface.hpp"
#import "default.hpp"
#import "device_selector_interface.hpp"
#import "source.hpp"
#import "source.hpp"
#import "sync.hpp"
#import "any.hpp"
#import "compiler_hints.hpp"
#import "copy_through_move.hpp"
#import "optional.hpp"
#import "throw.hpp"
#import "type_traits.hpp"
#import "util.hpp"
#import "variant.hpp"
#import "video.hpp"
#import "GeneralizedHough.h"
#import "GeneralizedHoughBallard.h"
#import "GeneralizedHoughGuil.h"
#import "GFTTDetector.h"
#import "GraphicalCodeDetector.h"
#import "GraphSegmentation.h"
#import "GrayCodePattern.h"
#import "GrayworldWB.h"
#import "GridBoard.h"
#import "GuidedFilter.h"
#import "HarrisLaplaceFeatureDetector.h"
#import "hfs.hpp"
#import "highgui.hpp"
#import "highgui.hpp"
#import "highgui_c.h"
#import "HistogramPhaseUnwrapping.h"
#import "HistogramPhaseUnwrappingParams.h"
#import "HOGDescriptor.h"
#import "Image2BlobParams.h"
#import "Imgcodecs.h"
#import "imgcodecs.hpp"
#import "imgcodecs.hpp"
#import "imgcodecs_c.h"
#import "ios.h"
#import "constants_c.h"
#import "macosx.h"
#import "ImgHashBase.h"
#import "Imgproc.h"
#import "imgproc.hpp"
#import "bindings.hpp"
#import "gcgraph.hpp"
#import "hal.hpp"
#import "interface.h"
#import "imgproc.hpp"
#import "imgproc_c.h"
#import "segmentation.hpp"
#import "types_c.h"
#import "Img_hash.h"
#import "img_hash.hpp"
#import "average_hash.hpp"
#import "block_mean_hash.hpp"
#import "color_moment_hash.hpp"
#import "img_hash_base.hpp"
#import "marr_hildreth_hash.hpp"
#import "phash.hpp"
#import "radial_variance_hash.hpp"
#import "Int4.h"
#import "IntelligentScissorsMB.h"
#import "intensity_transform.hpp"
#import "IntVector.h"
#import "KalmanFilter.h"
#import "KAZE.h"
#import "KeyPoint.h"
#import "KeypointsModel.h"
#import "KNearest.h"
#import "LATCH.h"
#import "Layer.h"
#import "LBPHFaceRecognizer.h"
#import "LearningBasedWB.h"
#import "LineSegmentDetector.h"
#import "line_descriptor.hpp"
#import "descriptor.hpp"
#import "LogisticRegression.h"
#import "LUCID.h"
#import "MACE.h"
#import "MarrHildrethHash.h"
#import "Mat.h"
#import "MatConverters.h"
#import "MatOfByte.h"
#import "MatOfDMatch.h"
#import "MatOfDouble.h"
#import "MatOfFloat.h"
#import "MatOfFloat4.h"
#import "MatOfFloat6.h"
#import "MatOfInt.h"
#import "MatOfInt4.h"
#import "MatOfKeyPoint.h"
#import "MatOfPoint2f.h"
#import "MatOfPoint2i.h"
#import "MatOfPoint3.h"
#import "MatOfPoint3f.h"
#import "MatOfRect2d.h"
#import "MatOfRect2i.h"
#import "MatOfRotatedRect.h"
#import "MatQuickLook.h"
#import "mcc.hpp"
#import "ccm.hpp"
#import "checker_detector.hpp"
#import "checker_model.hpp"
#import "MergeDebevec.h"
#import "MergeExposures.h"
#import "MergeMertens.h"
#import "MergeRobertson.h"
#import "MinMaxLocResult.h"
#import "Ml.h"
#import "ml.hpp"
#import "ml.hpp"
#import "ml.inl.hpp"
#import "Model.h"
#import "Moments.h"
#import "MSDDetector.h"
#import "MSER.h"
#import "Net.h"
#import "NormalBayesClassifier.h"
#import "Objdetect.h"
#import "objdetect.hpp"
#import "aruco_board.hpp"
#import "aruco_detector.hpp"
#import "aruco_dictionary.hpp"
#import "barcode.hpp"
#import "charuco_detector.hpp"
#import "detection_based_tracker.hpp"
#import "face.hpp"
#import "graphical_code_detector.hpp"
#import "objdetect.hpp"
#import "OCRBeamSearchDecoder.h"
#import "OCRBeamSearchDecoderClassifierCallback.h"
#import "OCRHMMDecoder.h"
#import "OCRHMMDecoderClassifierCallback.h"
#import "OCRTesseract.h"
#import "opencv.hpp"
#import "opencv2-Swift.h"
#import "opencv2.h"
#import "opencv_modules.hpp"
#import "optflow.hpp"
#import "motempl.hpp"
#import "pcaflow.hpp"
#import "rlofflow.hpp"
#import "sparse_matching_gpc.hpp"
#import "ORB.h"
#import "ParamGrid.h"
#import "PCTSignatures.h"
#import "PCTSignaturesSQFD.h"
#import "PhaseUnwrapping.h"
#import "Phase_unwrapping.h"
#import "phase_unwrapping.hpp"
#import "histogramphaseunwrapping.hpp"
#import "phase_unwrapping.hpp"
#import "PHash.h"
#import "Photo.h"
#import "photo.hpp"
#import "cuda.hpp"
#import "constants_c.h"
#import "photo.hpp"
#import "Plot.h"
#import "plot.hpp"
#import "Plot2d.h"
#import "Point2d.h"
#import "Point2f.h"
#import "Point2i.h"
#import "Point3d.h"
#import "Point3f.h"
#import "Point3i.h"
#import "PredictCollector.h"
#import "QRCodeDetector.h"
#import "QRCodeDetectorAruco.h"
#import "QRCodeDetectorArucoParams.h"
#import "QRCodeEncoder.h"
#import "QRCodeEncoderParams.h"
#import "quality.hpp"
#import "qualitybase.hpp"
#import "qualitybrisque.hpp"
#import "qualitygmsd.hpp"
#import "qualitymse.hpp"
#import "qualitypsnr.hpp"
#import "qualityssim.hpp"
#import "quality_utils.hpp"
#import "RadialVarianceHash.h"
#import "Range.h"
#import "rapid.hpp"
#import "Rect2d.h"
#import "Rect2f.h"
#import "Rect2i.h"
#import "RefineParameters.h"
#import "map.hpp"
#import "mapaffine.hpp"
#import "mapper.hpp"
#import "mappergradaffine.hpp"
#import "mappergradeuclid.hpp"
#import "mappergradproj.hpp"
#import "mappergradshift.hpp"
#import "mappergradsimilar.hpp"
#import "mapperpyramid.hpp"
#import "mapprojec.hpp"
#import "mapshift.hpp"
#import "Retina.h"
#import "RetinaFastToneMapping.h"
#import "RFFeatureGetter.h"
#import "rgbd.hpp"
#import "colored_kinfu.hpp"
#import "depth.hpp"
#import "pose_graph.hpp"
#import "dynafu.hpp"
#import "intrinsics.hpp"
#import "kinfu.hpp"
#import "large_kinfu.hpp"
#import "linemod.hpp"
#import "volume.hpp"
#import "RICInterpolator.h"
#import "RidgeDetectionFilter.h"
#import "RotatedRect.h"
#import "RTrees.h"
#import "saliency.hpp"
#import "saliencyBaseClasses.hpp"
#import "saliencySpecializedClasses.hpp"
#import "Scalar.h"
#import "ScanSegment.h"
#import "SegmentationModel.h"
#import "SelectiveSearchSegmentation.h"
#import "SelectiveSearchSegmentationStrategy.h"
#import "SelectiveSearchSegmentationStrategyColor.h"
#import "SelectiveSearchSegmentationStrategyFill.h"
#import "SelectiveSearchSegmentationStrategyMultiple.h"
#import "SelectiveSearchSegmentationStrategySize.h"
#import "SelectiveSearchSegmentationStrategyTexture.h"
#import "shape.hpp"
#import "emdL1.hpp"
#import "hist_cost.hpp"
#import "shape.hpp"
#import "shape_distance.hpp"
#import "shape_transformer.hpp"
#import "SIFT.h"
#import "SimpleBlobDetector.h"
#import "SimpleBlobDetectorParams.h"
#import "SimpleWB.h"
#import "SinusoidalPattern.h"
#import "SinusoidalPatternParams.h"
#import "Size2d.h"
#import "Size2f.h"
#import "Size2i.h"
#import "SparseMatchInterpolator.h"
#import "SparseOpticalFlow.h"
#import "SparsePyrLKOpticalFlow.h"
#import "StandardCollector.h"
#import "StarDetector.h"
#import "StatModel.h"
#import "stereo.hpp"
#import "descriptor.hpp"
#import "quasi_dense_stereo.hpp"
#import "stereo.hpp"
#import "StereoBM.h"
#import "StereoMatcher.h"
#import "StereoSGBM.h"
#import "stitching.hpp"
#import "autocalib.hpp"
#import "blenders.hpp"
#import "camera.hpp"
#import "exposure_compensate.hpp"
#import "matchers.hpp"
#import "motion_estimators.hpp"
#import "seam_finders.hpp"
#import "timelapsers.hpp"
#import "util.hpp"
#import "util_inl.hpp"
#import "warpers.hpp"
#import "warpers_inl.hpp"
#import "warpers.hpp"
#import "StructuredEdgeDetection.h"
#import "StructuredLightPattern.h"
#import "Structured_light.h"
#import "structured_light.hpp"
#import "graycodepattern.hpp"
#import "sinusoidalpattern.hpp"
#import "structured_light.hpp"
#import "Subdiv2D.h"
#import "SuperpixelLSC.h"
#import "SuperpixelSEEDS.h"
#import "SuperpixelSLIC.h"
#import "superres.hpp"
#import "optical_flow.hpp"
#import "SURF.h"
#import "surface_matching.hpp"
#import "icp.hpp"
#import "pose_3d.hpp"
#import "ppf_helpers.hpp"
#import "ppf_match_3d.hpp"
#import "t_hash_int.hpp"
#import "SVM.h"
#import "SVMSGD.h"
#import "SyntheticSequenceGenerator.h"
#import "TBMR.h"
#import "TEBLID.h"
#import "TermCriteria.h"
#import "Text.h"
#import "text.hpp"
#import "erfilter.hpp"
#import "ocr.hpp"
#import "swt_text_detection.hpp"
#import "textDetector.hpp"
#import "TextDetectionModel.h"
#import "TextDetectionModel_DB.h"
#import "TextDetectionModel_EAST.h"
#import "TextDetector.h"
#import "TextDetectorCNN.h"
#import "TextRecognitionModel.h"
#import "TickMeter.h"
#import "Tonemap.h"
#import "TonemapDrago.h"
#import "TonemapDurand.h"
#import "TonemapMantiuk.h"
#import "TonemapReinhard.h"
#import "Tracker.h"
#import "TrackerCSRT.h"
#import "TrackerCSRTParams.h"
#import "TrackerDaSiamRPN.h"
#import "TrackerDaSiamRPNParams.h"
#import "TrackerGOTURN.h"
#import "TrackerGOTURNParams.h"
#import "TrackerKCF.h"
#import "TrackerKCFParams.h"
#import "TrackerMIL.h"
#import "TrackerMILParams.h"
#import "TrackerNano.h"
#import "TrackerNanoParams.h"
#import "Tracking.h"
#import "tracking.hpp"
#import "feature.hpp"
#import "kalman_filters.hpp"
#import "onlineBoosting.hpp"
#import "tldDataset.hpp"
#import "tracking.hpp"
#import "tracking_by_matching.hpp"
#import "tracking_internals.hpp"
#import "tracking_legacy.hpp"
#import "TrainData.h"
#import "TransientAreasSegmentationModule.h"
#import "UsacParams.h"
#import "VariationalRefinement.h"
#import "VGG.h"
#import "Video.h"
#import "video.hpp"
#import "background_segm.hpp"
#import "tracking.detail.hpp"
#import "constants_c.h"
#import "tracking.hpp"
#import "video.hpp"
#import "VideoCapture.h"
#import "Videoio.h"
#import "videoio.hpp"
#import "cap_ios.h"
#import "constants_c.h"
#import "registry.hpp"
#import "videoio.hpp"
#import "videoio_c.h"
#import "videostab.hpp"
#import "deblurring.hpp"
#import "fast_marching.hpp"
#import "fast_marching_inl.hpp"
#import "frame_source.hpp"
#import "global_motion.hpp"
#import "inpainting.hpp"
#import "log.hpp"
#import "motion_core.hpp"
#import "motion_stabilizing.hpp"
#import "optical_flow.hpp"
#import "outlier_rejection.hpp"
#import "ring_buffer.hpp"
#import "stabilizer.hpp"
#import "wobble_suppression.hpp"
#import "VideoWriter.h"
#import "WeChatQRCode.h"
#import "Wechat_qrcode.h"
#import "wechat_qrcode.hpp"
#import "WhiteBalancer.h"
#import "world.hpp"
#import "Xfeatures2d.h"
#import "xfeatures2d.hpp"
#import "cuda.hpp"
#import "nonfree.hpp"
#import "Ximgproc.h"
#import "ximgproc.hpp"
#import "brightedges.hpp"
#import "color_match.hpp"
#import "deriche_filter.hpp"
#import "disparity_filter.hpp"
#import "edgeboxes.hpp"
#import "edgepreserving_filter.hpp"
#import "edge_drawing.hpp"
#import "edge_filter.hpp"
#import "estimated_covariance.hpp"
#import "fast_hough_transform.hpp"
#import "fast_line_detector.hpp"
#import "find_ellipses.hpp"
#import "fourier_descriptors.hpp"
#import "lsc.hpp"
#import "paillou_filter.hpp"
#import "peilin.hpp"
#import "radon_transform.hpp"
#import "ridgefilter.hpp"
#import "run_length_morphology.hpp"
#import "scansegment.hpp"
#import "seeds.hpp"
#import "segmentation.hpp"
#import "slic.hpp"
#import "sparse_match_interpolator.hpp"
#import "structured_edge_detection.hpp"
#import "weighted_median_filter.hpp"
#import "xobjdetect.hpp"
#import "Xphoto.h"
#import "xphoto.hpp"
#import "bm3d_image_denoising.hpp"
#import "dct_image_denoising.hpp"
#import "inpainting.hpp"
#import "oilpainting.hpp"
#import "tonemap.hpp"
#import "white_balance.hpp"

FOUNDATION_EXPORT double OpencvMacOSVersionNumber;
FOUNDATION_EXPORT const unsigned char OpencvMacOSVersionString[];
