/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

 #pragma once

 #include <react/renderer/components/view/conversions.h>
 #include <react/renderer/core/PropsParserContext.h>
 #include <react/renderer/core/propsConversions.h>
 
 #include <optional>
 
 namespace facebook::react {
 
 // This can be deleted when non-iterator ViewProp parsing is deleted
 template <typename T>
 static inline CascadedRectangleCorners<T> convertRawProp(
     const PropsParserContext& context,
     const RawProps& rawProps,
     const char* prefix,
     const char* suffix,
     const CascadedRectangleCorners<T>& sourceValue,
     const CascadedRectangleCorners<T>& defaultValue) {
   CascadedRectangleCorners<T> result;
 
   result.topLeft = convertRawProp(
       context,
       rawProps,
       "TopLeft",
       sourceValue.topLeft,
       defaultValue.topLeft,
       prefix,
       suffix);
   result.topRight = convertRawProp(
       context,
       rawProps,
       "TopRight",
       sourceValue.topRight,
       defaultValue.topRight,
       prefix,
       suffix);
   result.bottomLeft = convertRawProp(
       context,
       rawProps,
       "BottomLeft",
       sourceValue.bottomLeft,
       defaultValue.bottomLeft,
       prefix,
       suffix);
   result.bottomRight = convertRawProp(
       context,
       rawProps,
       "BottomRight",
       sourceValue.bottomRight,
       defaultValue.bottomRight,
       prefix,
       suffix);
 
   result.topStart = convertRawProp(
       context,
       rawProps,
       "TopStart",
       sourceValue.topStart,
       defaultValue.topStart,
       prefix,
       suffix);
   result.topEnd = convertRawProp(
       context,
       rawProps,
       "TopEnd",
       sourceValue.topEnd,
       defaultValue.topEnd,
       prefix,
       suffix);
   result.bottomStart = convertRawProp(
       context,
       rawProps,
       "BottomStart",
       sourceValue.bottomStart,
       defaultValue.bottomStart,
       prefix,
       suffix);
   result.bottomEnd = convertRawProp(
       context,
       rawProps,
       "BottomEnd",
       sourceValue.bottomEnd,
       defaultValue.bottomEnd,
       prefix,
       suffix);
   result.endEnd = convertRawProp(
       context,
       rawProps,
       "EndEnd",
       sourceValue.endEnd,
       defaultValue.endEnd,
       prefix,
       suffix);
   result.endStart = convertRawProp(
       context,
       rawProps,
       "EndStart",
       sourceValue.endStart,
       defaultValue.endStart,
       prefix,
       suffix);
   result.startEnd = convertRawProp(
       context,
       rawProps,
       "StartEnd",
       sourceValue.startEnd,
       defaultValue.startEnd,
       prefix,
       suffix);
   result.startStart = convertRawProp(
       context,
       rawProps,
       "StartStart",
       sourceValue.startStart,
       defaultValue.startStart,
       prefix,
       suffix);
 
   result.all = convertRawProp(
       context, rawProps, "", sourceValue.all, defaultValue.all, prefix, suffix);
 
   return result;
 }
 
 template <typename T>
 static inline CascadedRectangleEdges<T> convertRawProp(
     const PropsParserContext& context,
     const RawProps& rawProps,
     const char* prefix,
     const char* suffix,
     const CascadedRectangleEdges<T>& sourceValue,
     const CascadedRectangleEdges<T>& defaultValue) {
   CascadedRectangleEdges<T> result;
 
   result.leftEdge = convertRawProp(
       context,
       rawProps,
       "Left",
       sourceValue.leftEdge,
       defaultValue.leftEdge,
       prefix,
       suffix);
   result.rightEdge = convertRawProp(
       context,
       rawProps,
       "Right",
       sourceValue.rightEdge,
       defaultValue.rightEdge,
       prefix,
       suffix);
   result.topEdge = convertRawProp(
       context,
       rawProps,
       "Top",
       sourceValue.topEdge,
       defaultValue.topEdge,
       prefix,
       suffix);
   result.bottomEdge = convertRawProp(
       context,
       rawProps,
       "Bottom",
       sourceValue.bottomEdge,
       defaultValue.bottomEdge,
       prefix,
       suffix);
 
   result.startEdge = convertRawProp(
       context,
       rawProps,
       "Start",
       sourceValue.startEdge,
       defaultValue.startEdge,
       prefix,
       suffix);
   result.endEdge = convertRawProp(
       context,
       rawProps,
       "End",
       sourceValue.endEdge,
       defaultValue.endEdge,
       prefix,
       suffix);
   result.horizontalEdges = convertRawProp(
       context,
       rawProps,
       "Horizontal",
       sourceValue.horizontalEdges,
       defaultValue.horizontalEdges,
       prefix,
       suffix);
   result.verticalEdges = convertRawProp(
       context,
       rawProps,
       "Vertical",
       sourceValue.verticalEdges,
       defaultValue.verticalEdges,
       prefix,
       suffix);
   result.blockEdges = convertRawProp(
       context,
       rawProps,
       "Block",
       sourceValue.blockEdges,
       defaultValue.blockEdges,
       prefix,
       suffix);
   result.blockEndEdge = convertRawProp(
       context,
       rawProps,
       "BlockEnd",
       sourceValue.blockEndEdge,
       defaultValue.blockEndEdge,
       prefix,
       suffix);
   result.blockStartEdge = convertRawProp(
       context,
       rawProps,
       "BlockStart",
       sourceValue.blockStartEdge,
       defaultValue.blockStartEdge,
       prefix,
       suffix);
   result.inlineEdges = convertRawProp(
       context,
       rawProps,
       "Inline",
       sourceValue.inlineEdges,
       defaultValue.inlineEdges,
       prefix,
       suffix);
   result.inlineEndEdge = convertRawProp(
       context,
       rawProps,
       "InlineEnd",
       sourceValue.inlineEndEdge,
       defaultValue.inlineEndEdge,
       prefix,
       suffix);
   result.inlineStartEdge = convertRawProp(
       context,
       rawProps,
       "InlineStart",
       sourceValue.inlineStartEdge,
       defaultValue.inlineStartEdge,
       prefix,
       suffix);
   result.allEdges = convertRawProp(
       context,
       rawProps,
       "",
       sourceValue.allEdges,
       defaultValue.allEdges,
       prefix,
       suffix);
 
   return result;
 }
 
 // This can be deleted when non-iterator ViewProp parsing is deleted
 static inline ViewEvents convertRawProp(
     const PropsParserContext& context,
     const RawProps& rawProps,
     const ViewEvents& sourceValue,
     const ViewEvents& defaultValue) {
   ViewEvents result{};
   using Offset = ViewEvents::Offset;
 
   result[Offset::PointerEnter] = convertRawProp(
       context,
       rawProps,
       "onPointerEnter",
       sourceValue[Offset::PointerEnter],
       defaultValue[Offset::PointerEnter]);
   result[Offset::PointerMove] = convertRawProp(
       context,
       rawProps,
       "onPointerMove",
       sourceValue[Offset::PointerMove],
       defaultValue[Offset::PointerMove]);
   result[Offset::PointerLeave] = convertRawProp(
       context,
       rawProps,
       "onPointerLeave",
       sourceValue[Offset::PointerLeave],
       defaultValue[Offset::PointerLeave]);
 
   // Experimental W3C Pointer callbacks
   result[Offset::PointerEnterCapture] = convertRawProp(
       context,
       rawProps,
       "onPointerEnterCapture",
       sourceValue[Offset::PointerEnterCapture],
       defaultValue[Offset::PointerEnterCapture]);
   result[Offset::PointerMoveCapture] = convertRawProp(
       context,
       rawProps,
       "onPointerMoveCapture",
       sourceValue[Offset::PointerMoveCapture],
       defaultValue[Offset::PointerMoveCapture]);
   result[Offset::PointerLeaveCapture] = convertRawProp(
       context,
       rawProps,
       "onPointerLeaveCapture",
       sourceValue[Offset::PointerLeaveCapture],
       defaultValue[Offset::PointerLeaveCapture]);
   result[Offset::PointerOver] = convertRawProp(
       context,
       rawProps,
       "onPointerOver",
       sourceValue[Offset::PointerOver],
       defaultValue[Offset::PointerOver]);
   result[Offset::PointerOut] = convertRawProp(
       context,
       rawProps,
       "onPointerOut",
       sourceValue[Offset::PointerOut],
       defaultValue[Offset::PointerOut]);
   result[Offset::Click] = convertRawProp(
       context,
       rawProps,
       "onClick",
       sourceValue[Offset::Click],
       defaultValue[Offset::Click]);
   result[Offset::ClickCapture] = convertRawProp(
       context,
       rawProps,
       "onClickCapture",
       sourceValue[Offset::ClickCapture],
       defaultValue[Offset::ClickCapture]);
   result[Offset::PointerDown] = convertRawProp(
       context,
       rawProps,
       "onPointerDown",
       sourceValue[Offset::PointerDown],
       defaultValue[Offset::PointerDown]);
   result[Offset::PointerDownCapture] = convertRawProp(
       context,
       rawProps,
       "onPointerDownCapture",
       sourceValue[Offset::PointerDownCapture],
       defaultValue[Offset::PointerDownCapture]);
   result[Offset::PointerUp] = convertRawProp(
       context,
       rawProps,
       "onPointerUp",
       sourceValue[Offset::PointerUp],
       defaultValue[Offset::PointerUp]);
   result[Offset::PointerUpCapture] = convertRawProp(
       context,
       rawProps,
       "onPointerUpCapture",
       sourceValue[Offset::PointerUpCapture],
       defaultValue[Offset::PointerUpCapture]);
   // TODO: gotPointerCapture & lostPointerCapture
 
   // PanResponder callbacks
   result[Offset::MoveShouldSetResponder] = convertRawProp(
       context,
       rawProps,
       "onMoveShouldSetResponder",
       sourceValue[Offset::MoveShouldSetResponder],
       defaultValue[Offset::MoveShouldSetResponder]);
   result[Offset::MoveShouldSetResponderCapture] = convertRawProp(
       context,
       rawProps,
       "onMoveShouldSetResponderCapture",
       sourceValue[Offset::MoveShouldSetResponderCapture],
       defaultValue[Offset::MoveShouldSetResponderCapture]);
   result[Offset::StartShouldSetResponder] = convertRawProp(
       context,
       rawProps,
       "onStartShouldSetResponder",
       sourceValue[Offset::StartShouldSetResponder],
       defaultValue[Offset::StartShouldSetResponder]);
   result[Offset::StartShouldSetResponderCapture] = convertRawProp(
       context,
       rawProps,
       "onStartShouldSetResponderCapture",
       sourceValue[Offset::StartShouldSetResponderCapture],
       defaultValue[Offset::StartShouldSetResponderCapture]);
   result[Offset::ResponderGrant] = convertRawProp(
       context,
       rawProps,
       "onResponderGrant",
       sourceValue[Offset::ResponderGrant],
       defaultValue[Offset::ResponderGrant]);
   result[Offset::ResponderReject] = convertRawProp(
       context,
       rawProps,
       "onResponderReject",
       sourceValue[Offset::ResponderReject],
       defaultValue[Offset::ResponderReject]);
   result[Offset::ResponderStart] = convertRawProp(
       context,
       rawProps,
       "onResponderStart",
       sourceValue[Offset::ResponderStart],
       defaultValue[Offset::ResponderStart]);
   result[Offset::ResponderEnd] = convertRawProp(
       context,
       rawProps,
       "onResponderEnd",
       sourceValue[Offset::ResponderEnd],
       defaultValue[Offset::ResponderEnd]);
   result[Offset::ResponderRelease] = convertRawProp(
       context,
       rawProps,
       "onResponderRelease",
       sourceValue[Offset::ResponderRelease],
       defaultValue[Offset::ResponderRelease]);
   result[Offset::ResponderMove] = convertRawProp(
       context,
       rawProps,
       "onResponderMove",
       sourceValue[Offset::ResponderMove],
       defaultValue[Offset::ResponderMove]);
   result[Offset::ResponderTerminate] = convertRawProp(
       context,
       rawProps,
       "onResponderTerminate",
       sourceValue[Offset::ResponderTerminate],
       defaultValue[Offset::ResponderTerminate]);
   result[Offset::ResponderTerminationRequest] = convertRawProp(
       context,
       rawProps,
       "onResponderTerminationRequest",
       sourceValue[Offset::ResponderTerminationRequest],
       defaultValue[Offset::ResponderTerminationRequest]);
   result[Offset::ShouldBlockNativeResponder] = convertRawProp(
       context,
       rawProps,
       "onShouldBlockNativeResponder",
       sourceValue[Offset::ShouldBlockNativeResponder],
       defaultValue[Offset::ShouldBlockNativeResponder]);
 
   // Touch events
   result[Offset::TouchStart] = convertRawProp(
       context,
       rawProps,
       "onTouchStart",
       sourceValue[Offset::TouchStart],
       defaultValue[Offset::TouchStart]);
   result[Offset::TouchMove] = convertRawProp(
       context,
       rawProps,
       "onTouchMove",
       sourceValue[Offset::TouchMove],
       defaultValue[Offset::TouchMove]);
   result[Offset::TouchEnd] = convertRawProp(
       context,
       rawProps,
       "onTouchEnd",
       sourceValue[Offset::TouchEnd],
       defaultValue[Offset::TouchEnd]);
   result[Offset::TouchCancel] = convertRawProp(
       context,
       rawProps,
       "onTouchCancel",
       sourceValue[Offset::TouchCancel],
       defaultValue[Offset::TouchCancel]);
 
   return result;
 }
 
 } // namespace facebook::react
 