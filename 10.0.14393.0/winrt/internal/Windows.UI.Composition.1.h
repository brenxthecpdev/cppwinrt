// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Composition.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.DirectX.0.h"
#include "Windows.Graphics.Effects.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Composition {

struct __declspec(uuid("a48130a1-b7c4-46f7-b9bf-daf43a44e6ee")) __declspec(novtable) IAmbientLight : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Color(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Color(Windows::UI::Color value) = 0;
};

struct __declspec(uuid("93adb5e9-8e05-4593-84a3-dca152781e56")) __declspec(novtable) IColorKeyFrameAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InterpolationColorSpace(winrt::Windows::UI::Composition::CompositionColorSpace * value) = 0;
    virtual HRESULT __stdcall put_InterpolationColorSpace(winrt::Windows::UI::Composition::CompositionColorSpace value) = 0;
    virtual HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::UI::Color value, Windows::UI::Composition::ICompositionEasingFunction * easingFunction) = 0;
};

struct __declspec(uuid("464c4c2c-1caa-4061-9b40-e13fde1503ca")) __declspec(novtable) ICompositionAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ClearAllParameters() = 0;
    virtual HRESULT __stdcall abi_ClearParameter(hstring key) = 0;
    virtual HRESULT __stdcall abi_SetColorParameter(hstring key, Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall abi_SetMatrix3x2Parameter(hstring key, Windows::Foundation::Numerics::float3x2 value) = 0;
    virtual HRESULT __stdcall abi_SetMatrix4x4Parameter(hstring key, Windows::Foundation::Numerics::float4x4 value) = 0;
    virtual HRESULT __stdcall abi_SetQuaternionParameter(hstring key, Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall abi_SetReferenceParameter(hstring key, Windows::UI::Composition::ICompositionObject * compositionObject) = 0;
    virtual HRESULT __stdcall abi_SetScalarParameter(hstring key, float value) = 0;
    virtual HRESULT __stdcall abi_SetVector2Parameter(hstring key, Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall abi_SetVector3Parameter(hstring key, Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall abi_SetVector4Parameter(hstring key, Windows::Foundation::Numerics::float4 value) = 0;
};

struct __declspec(uuid("369b603e-a80f-4948-93e3-ed23fb38c6cb")) __declspec(novtable) ICompositionAnimation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetBooleanParameter(hstring key, bool value) = 0;
    virtual HRESULT __stdcall get_Target(hstring * value) = 0;
    virtual HRESULT __stdcall put_Target(hstring value) = 0;
};

struct __declspec(uuid("1c2c2999-e818-48d3-a6dd-d78c82f8ace9")) __declspec(novtable) ICompositionAnimationBase : Windows::IInspectable
{
};

struct __declspec(uuid("10f6c4fb-6e51-4c25-bbd3-586a9bec3ef4")) __declspec(novtable) ICompositionAnimationFactory : Windows::IInspectable
{
};

struct __declspec(uuid("5e7cc90c-cd14-4e07-8a55-c72527aabdac")) __declspec(novtable) ICompositionAnimationGroup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Count(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_Add(Windows::UI::Composition::ICompositionAnimation * value) = 0;
    virtual HRESULT __stdcall abi_Remove(Windows::UI::Composition::ICompositionAnimation * value) = 0;
    virtual HRESULT __stdcall abi_RemoveAll() = 0;
};

struct __declspec(uuid("c5acae58-3898-499e-8d7f-224e91286a5d")) __declspec(novtable) ICompositionBackdropBrush : Windows::IInspectable
{
};

struct __declspec(uuid("0d00dad0-9464-450a-a562-2e2698b0a812")) __declspec(novtable) ICompositionBatchCompletedEventArgs : Windows::IInspectable
{
};

struct __declspec(uuid("ab0d7608-30c0-40e9-b568-b60a6bd1fb46")) __declspec(novtable) ICompositionBrush : Windows::IInspectable
{
};

struct __declspec(uuid("da53fb4c-4650-47c4-ad76-765379607ed6")) __declspec(novtable) ICompositionBrushFactory : Windows::IInspectable
{
};

struct __declspec(uuid("1ccd2a52-cfc7-4ace-9983-146bb8eb6a3c")) __declspec(novtable) ICompositionClip : Windows::IInspectable
{
};

struct __declspec(uuid("5893e069-3516-40e1-89e0-5ba924927235")) __declspec(novtable) ICompositionClip2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float * value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float * value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2 * value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) = 0;
};

struct __declspec(uuid("b9484caf-20c7-4aed-ac4a-9c78ba1302cf")) __declspec(novtable) ICompositionClipFactory : Windows::IInspectable
{
};

struct __declspec(uuid("2b264c5e-bf35-4831-8642-cf70c20fff2f")) __declspec(novtable) ICompositionColorBrush : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Color(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Color(Windows::UI::Color value) = 0;
};

struct __declspec(uuid("0d00dad0-ca07-4400-8c8e-cb5db08559cc")) __declspec(novtable) ICompositionCommitBatch : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsActive(bool * value) = 0;
    virtual HRESULT __stdcall get_IsEnded(bool * value) = 0;
    virtual HRESULT __stdcall add_Completed(Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Completed(event_token token) = 0;
};

struct __declspec(uuid("a166c300-fad0-4d11-9e67-e433162ff49e")) __declspec(novtable) ICompositionDrawingSurface : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlphaMode(winrt::Windows::Graphics::DirectX::DirectXAlphaMode * value) = 0;
    virtual HRESULT __stdcall get_PixelFormat(winrt::Windows::Graphics::DirectX::DirectXPixelFormat * value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size * value) = 0;
};

struct __declspec(uuid("5145e356-bf79-4ea8-8cc2-6b5b472e6c9a")) __declspec(novtable) ICompositionEasingFunction : Windows::IInspectable
{
};

struct __declspec(uuid("60840774-3da0-4949-8200-7206c00190a0")) __declspec(novtable) ICompositionEasingFunctionFactory : Windows::IInspectable
{
};

struct __declspec(uuid("bf7f795e-83cc-44bf-a447-3e3c071789ec")) __declspec(novtable) ICompositionEffectBrush : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetSourceParameter(hstring name, Windows::UI::Composition::ICompositionBrush ** result) = 0;
    virtual HRESULT __stdcall abi_SetSourceParameter(hstring name, Windows::UI::Composition::ICompositionBrush * source) = 0;
};

struct __declspec(uuid("be5624af-ba7e-4510-9850-41c0b4ff74df")) __declspec(novtable) ICompositionEffectFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateBrush(Windows::UI::Composition::ICompositionEffectBrush ** result) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
    virtual HRESULT __stdcall get_LoadStatus(winrt::Windows::UI::Composition::CompositionEffectFactoryLoadStatus * value) = 0;
};

struct __declspec(uuid("858ab13a-3292-4e4e-b3bb-2b6c6544a6ee")) __declspec(novtable) ICompositionEffectSourceParameter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
};

struct __declspec(uuid("b3d9f276-aba3-4724-acf3-d0397464db1c")) __declspec(novtable) ICompositionEffectSourceParameterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring name, Windows::UI::Composition::ICompositionEffectSourceParameter ** instance) = 0;
};

struct __declspec(uuid("fb22c6e1-80a2-4667-9936-dbeaf6eefe95")) __declspec(novtable) ICompositionGraphicsDevice : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateDrawingSurface(Windows::Foundation::Size sizePixels, winrt::Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, winrt::Windows::Graphics::DirectX::DirectXAlphaMode alphaMode, Windows::UI::Composition::ICompositionDrawingSurface ** result) = 0;
    virtual HRESULT __stdcall add_RenderingDeviceReplaced(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RenderingDeviceReplaced(event_token token) = 0;
};

struct __declspec(uuid("41a6d7c2-2e5d-4bc1-b09e-8f0a03e3d8d3")) __declspec(novtable) ICompositionLight : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Targets(Windows::UI::Composition::IVisualUnorderedCollection ** value) = 0;
};

struct __declspec(uuid("069cf306-da3c-4b44-838a-5e03d51ace55")) __declspec(novtable) ICompositionLightFactory : Windows::IInspectable
{
};

struct __declspec(uuid("522cf09e-be6b-4f41-be49-f9226d471b4a")) __declspec(novtable) ICompositionMaskBrush : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Mask(Windows::UI::Composition::ICompositionBrush ** value) = 0;
    virtual HRESULT __stdcall put_Mask(Windows::UI::Composition::ICompositionBrush * value) = 0;
    virtual HRESULT __stdcall get_Source(Windows::UI::Composition::ICompositionBrush ** value) = 0;
    virtual HRESULT __stdcall put_Source(Windows::UI::Composition::ICompositionBrush * value) = 0;
};

struct __declspec(uuid("f25154e4-bc8c-4be7-b80f-8685b83c0186")) __declspec(novtable) ICompositionNineGridBrush : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BottomInset(float * value) = 0;
    virtual HRESULT __stdcall put_BottomInset(float value) = 0;
    virtual HRESULT __stdcall get_BottomInsetScale(float * value) = 0;
    virtual HRESULT __stdcall put_BottomInsetScale(float value) = 0;
    virtual HRESULT __stdcall get_IsCenterHollow(bool * value) = 0;
    virtual HRESULT __stdcall put_IsCenterHollow(bool value) = 0;
    virtual HRESULT __stdcall get_LeftInset(float * value) = 0;
    virtual HRESULT __stdcall put_LeftInset(float value) = 0;
    virtual HRESULT __stdcall get_LeftInsetScale(float * value) = 0;
    virtual HRESULT __stdcall put_LeftInsetScale(float value) = 0;
    virtual HRESULT __stdcall get_RightInset(float * value) = 0;
    virtual HRESULT __stdcall put_RightInset(float value) = 0;
    virtual HRESULT __stdcall get_RightInsetScale(float * value) = 0;
    virtual HRESULT __stdcall put_RightInsetScale(float value) = 0;
    virtual HRESULT __stdcall get_Source(Windows::UI::Composition::ICompositionBrush ** value) = 0;
    virtual HRESULT __stdcall put_Source(Windows::UI::Composition::ICompositionBrush * value) = 0;
    virtual HRESULT __stdcall get_TopInset(float * value) = 0;
    virtual HRESULT __stdcall put_TopInset(float value) = 0;
    virtual HRESULT __stdcall get_TopInsetScale(float * value) = 0;
    virtual HRESULT __stdcall put_TopInsetScale(float value) = 0;
    virtual HRESULT __stdcall abi_SetInsets(float inset) = 0;
    virtual HRESULT __stdcall abi_SetInsetsWithValues(float left, float top, float right, float bottom) = 0;
    virtual HRESULT __stdcall abi_SetInsetScales(float scale) = 0;
    virtual HRESULT __stdcall abi_SetInsetScalesWithValues(float left, float top, float right, float bottom) = 0;
};

struct __declspec(uuid("bcb4ad45-7609-4550-934f-16002a68fded")) __declspec(novtable) ICompositionObject : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Compositor(Windows::UI::Composition::ICompositor ** value) = 0;
    virtual HRESULT __stdcall get_Dispatcher(Windows::UI::Core::ICoreDispatcher ** value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::UI::Composition::ICompositionPropertySet ** value) = 0;
    virtual HRESULT __stdcall abi_StartAnimation(hstring propertyName, Windows::UI::Composition::ICompositionAnimation * animation) = 0;
    virtual HRESULT __stdcall abi_StopAnimation(hstring propertyName) = 0;
};

struct __declspec(uuid("ef874ea1-5cff-4b68-9e30-a1519d08ba03")) __declspec(novtable) ICompositionObject2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Comment(hstring * value) = 0;
    virtual HRESULT __stdcall put_Comment(hstring value) = 0;
    virtual HRESULT __stdcall get_ImplicitAnimations(Windows::UI::Composition::IImplicitAnimationCollection ** value) = 0;
    virtual HRESULT __stdcall put_ImplicitAnimations(Windows::UI::Composition::IImplicitAnimationCollection * value) = 0;
    virtual HRESULT __stdcall abi_StartAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase * value) = 0;
    virtual HRESULT __stdcall abi_StopAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase * value) = 0;
};

struct __declspec(uuid("51205c5e-558a-4f2a-8d39-37bfe1e20ddd")) __declspec(novtable) ICompositionObjectFactory : Windows::IInspectable
{
};

struct __declspec(uuid("c9d6d202-5f67-4453-9117-9eadd430d3c2")) __declspec(novtable) ICompositionPropertySet : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_InsertColor(hstring propertyName, Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall abi_InsertMatrix3x2(hstring propertyName, Windows::Foundation::Numerics::float3x2 value) = 0;
    virtual HRESULT __stdcall abi_InsertMatrix4x4(hstring propertyName, Windows::Foundation::Numerics::float4x4 value) = 0;
    virtual HRESULT __stdcall abi_InsertQuaternion(hstring propertyName, Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall abi_InsertScalar(hstring propertyName, float value) = 0;
    virtual HRESULT __stdcall abi_InsertVector2(hstring propertyName, Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall abi_InsertVector3(hstring propertyName, Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall abi_InsertVector4(hstring propertyName, Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall abi_TryGetColor(hstring propertyName, Windows::UI::Color * value, winrt::Windows::UI::Composition::CompositionGetValueStatus * result) = 0;
    virtual HRESULT __stdcall abi_TryGetMatrix3x2(hstring propertyName, Windows::Foundation::Numerics::float3x2 * value, winrt::Windows::UI::Composition::CompositionGetValueStatus * result) = 0;
    virtual HRESULT __stdcall abi_TryGetMatrix4x4(hstring propertyName, Windows::Foundation::Numerics::float4x4 * value, winrt::Windows::UI::Composition::CompositionGetValueStatus * result) = 0;
    virtual HRESULT __stdcall abi_TryGetQuaternion(hstring propertyName, Windows::Foundation::Numerics::quaternion * value, winrt::Windows::UI::Composition::CompositionGetValueStatus * result) = 0;
    virtual HRESULT __stdcall abi_TryGetScalar(hstring propertyName, float * value, winrt::Windows::UI::Composition::CompositionGetValueStatus * result) = 0;
    virtual HRESULT __stdcall abi_TryGetVector2(hstring propertyName, Windows::Foundation::Numerics::float2 * value, winrt::Windows::UI::Composition::CompositionGetValueStatus * result) = 0;
    virtual HRESULT __stdcall abi_TryGetVector3(hstring propertyName, Windows::Foundation::Numerics::float3 * value, winrt::Windows::UI::Composition::CompositionGetValueStatus * result) = 0;
    virtual HRESULT __stdcall abi_TryGetVector4(hstring propertyName, Windows::Foundation::Numerics::float4 * value, winrt::Windows::UI::Composition::CompositionGetValueStatus * result) = 0;
};

struct __declspec(uuid("de80731e-a211-4455-8880-7d0f3f6a44fd")) __declspec(novtable) ICompositionPropertySet2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_InsertBoolean(hstring propertyName, bool value) = 0;
    virtual HRESULT __stdcall abi_TryGetBoolean(hstring propertyName, bool * value, winrt::Windows::UI::Composition::CompositionGetValueStatus * result) = 0;
};

struct __declspec(uuid("0d00dad0-fb07-46fd-8c72-6280d1a3d1dd")) __declspec(novtable) ICompositionScopedBatch : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsActive(bool * value) = 0;
    virtual HRESULT __stdcall get_IsEnded(bool * value) = 0;
    virtual HRESULT __stdcall abi_End() = 0;
    virtual HRESULT __stdcall abi_Resume() = 0;
    virtual HRESULT __stdcall abi_Suspend() = 0;
    virtual HRESULT __stdcall add_Completed(Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Completed(event_token token) = 0;
};

struct __declspec(uuid("329e52e2-4335-49cc-b14a-37782d10f0c4")) __declspec(novtable) ICompositionShadow : Windows::IInspectable
{
};

struct __declspec(uuid("221f492f-dcba-4b91-999e-1dc217a01530")) __declspec(novtable) ICompositionShadowFactory : Windows::IInspectable
{
};

struct __declspec(uuid("1527540d-42c7-47a6-a408-668f79a90dfb")) __declspec(novtable) ICompositionSurface : Windows::IInspectable
{
};

struct __declspec(uuid("ad016d79-1e4c-4c0d-9c29-83338c87c162")) __declspec(novtable) ICompositionSurfaceBrush : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BitmapInterpolationMode(winrt::Windows::UI::Composition::CompositionBitmapInterpolationMode * value) = 0;
    virtual HRESULT __stdcall put_BitmapInterpolationMode(winrt::Windows::UI::Composition::CompositionBitmapInterpolationMode value) = 0;
    virtual HRESULT __stdcall get_HorizontalAlignmentRatio(float * value) = 0;
    virtual HRESULT __stdcall put_HorizontalAlignmentRatio(float value) = 0;
    virtual HRESULT __stdcall get_Stretch(winrt::Windows::UI::Composition::CompositionStretch * value) = 0;
    virtual HRESULT __stdcall put_Stretch(winrt::Windows::UI::Composition::CompositionStretch value) = 0;
    virtual HRESULT __stdcall get_Surface(Windows::UI::Composition::ICompositionSurface ** value) = 0;
    virtual HRESULT __stdcall put_Surface(Windows::UI::Composition::ICompositionSurface * value) = 0;
    virtual HRESULT __stdcall get_VerticalAlignmentRatio(float * value) = 0;
    virtual HRESULT __stdcall put_VerticalAlignmentRatio(float value) = 0;
};

struct __declspec(uuid("d27174d5-64f5-4692-9dc7-71b61d7e5880")) __declspec(novtable) ICompositionSurfaceBrush2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float * value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float * value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2 * value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) = 0;
};

struct __declspec(uuid("a1bea8ba-d726-4663-8129-6b5e7927ffa6")) __declspec(novtable) ICompositionTarget : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Root(Windows::UI::Composition::IVisual ** value) = 0;
    virtual HRESULT __stdcall put_Root(Windows::UI::Composition::IVisual * value) = 0;
};

struct __declspec(uuid("b403ca50-7f8c-4e83-985f-cc45060036d8")) __declspec(novtable) ICompositor : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateColorKeyFrameAnimation(Windows::UI::Composition::IColorKeyFrameAnimation ** result) = 0;
    virtual HRESULT __stdcall abi_CreateColorBrush(Windows::UI::Composition::ICompositionColorBrush ** result) = 0;
    virtual HRESULT __stdcall abi_CreateColorBrushWithColor(Windows::UI::Color color, Windows::UI::Composition::ICompositionColorBrush ** result) = 0;
    virtual HRESULT __stdcall abi_CreateContainerVisual(Windows::UI::Composition::IContainerVisual ** result) = 0;
    virtual HRESULT __stdcall abi_CreateCubicBezierEasingFunction(Windows::Foundation::Numerics::float2 controlPoint1, Windows::Foundation::Numerics::float2 controlPoint2, Windows::UI::Composition::ICubicBezierEasingFunction ** result) = 0;
    virtual HRESULT __stdcall abi_CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect * graphicsEffect, Windows::UI::Composition::ICompositionEffectFactory ** result) = 0;
    virtual HRESULT __stdcall abi_CreateEffectFactoryWithProperties(Windows::Graphics::Effects::IGraphicsEffect * graphicsEffect, Windows::Foundation::Collections::IIterable<hstring> * animatableProperties, Windows::UI::Composition::ICompositionEffectFactory ** result) = 0;
    virtual HRESULT __stdcall abi_CreateExpressionAnimation(Windows::UI::Composition::IExpressionAnimation ** result) = 0;
    virtual HRESULT __stdcall abi_CreateExpressionAnimationWithExpression(hstring expression, Windows::UI::Composition::IExpressionAnimation ** result) = 0;
    virtual HRESULT __stdcall abi_CreateInsetClip(Windows::UI::Composition::IInsetClip ** result) = 0;
    virtual HRESULT __stdcall abi_CreateInsetClipWithInsets(float leftInset, float topInset, float rightInset, float bottomInset, Windows::UI::Composition::IInsetClip ** result) = 0;
    virtual HRESULT __stdcall abi_CreateLinearEasingFunction(Windows::UI::Composition::ILinearEasingFunction ** result) = 0;
    virtual HRESULT __stdcall abi_CreatePropertySet(Windows::UI::Composition::ICompositionPropertySet ** result) = 0;
    virtual HRESULT __stdcall abi_CreateQuaternionKeyFrameAnimation(Windows::UI::Composition::IQuaternionKeyFrameAnimation ** result) = 0;
    virtual HRESULT __stdcall abi_CreateScalarKeyFrameAnimation(Windows::UI::Composition::IScalarKeyFrameAnimation ** result) = 0;
    virtual HRESULT __stdcall abi_CreateScopedBatch(winrt::Windows::UI::Composition::CompositionBatchTypes batchType, Windows::UI::Composition::ICompositionScopedBatch ** result) = 0;
    virtual HRESULT __stdcall abi_CreateSpriteVisual(Windows::UI::Composition::ISpriteVisual ** result) = 0;
    virtual HRESULT __stdcall abi_CreateSurfaceBrush(Windows::UI::Composition::ICompositionSurfaceBrush ** result) = 0;
    virtual HRESULT __stdcall abi_CreateSurfaceBrushWithSurface(Windows::UI::Composition::ICompositionSurface * surface, Windows::UI::Composition::ICompositionSurfaceBrush ** result) = 0;
    virtual HRESULT __stdcall abi_CreateTargetForCurrentView(Windows::UI::Composition::ICompositionTarget ** result) = 0;
    virtual HRESULT __stdcall abi_CreateVector2KeyFrameAnimation(Windows::UI::Composition::IVector2KeyFrameAnimation ** result) = 0;
    virtual HRESULT __stdcall abi_CreateVector3KeyFrameAnimation(Windows::UI::Composition::IVector3KeyFrameAnimation ** result) = 0;
    virtual HRESULT __stdcall abi_CreateVector4KeyFrameAnimation(Windows::UI::Composition::IVector4KeyFrameAnimation ** result) = 0;
    virtual HRESULT __stdcall abi_GetCommitBatch(winrt::Windows::UI::Composition::CompositionBatchTypes batchType, Windows::UI::Composition::ICompositionCommitBatch ** result) = 0;
};

struct __declspec(uuid("735081dc-5e24-45da-a38f-e32cc349a9a0")) __declspec(novtable) ICompositor2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateAmbientLight(Windows::UI::Composition::IAmbientLight ** result) = 0;
    virtual HRESULT __stdcall abi_CreateAnimationGroup(Windows::UI::Composition::ICompositionAnimationGroup ** result) = 0;
    virtual HRESULT __stdcall abi_CreateBackdropBrush(Windows::UI::Composition::ICompositionBackdropBrush ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDistantLight(Windows::UI::Composition::IDistantLight ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDropShadow(Windows::UI::Composition::IDropShadow ** result) = 0;
    virtual HRESULT __stdcall abi_CreateImplicitAnimationCollection(Windows::UI::Composition::IImplicitAnimationCollection ** result) = 0;
    virtual HRESULT __stdcall abi_CreateLayerVisual(Windows::UI::Composition::ILayerVisual ** result) = 0;
    virtual HRESULT __stdcall abi_CreateMaskBrush(Windows::UI::Composition::ICompositionMaskBrush ** result) = 0;
    virtual HRESULT __stdcall abi_CreateNineGridBrush(Windows::UI::Composition::ICompositionNineGridBrush ** result) = 0;
    virtual HRESULT __stdcall abi_CreatePointLight(Windows::UI::Composition::IPointLight ** result) = 0;
    virtual HRESULT __stdcall abi_CreateSpotLight(Windows::UI::Composition::ISpotLight ** result) = 0;
    virtual HRESULT __stdcall abi_CreateStepEasingFunction(Windows::UI::Composition::IStepEasingFunction ** result) = 0;
    virtual HRESULT __stdcall abi_CreateStepEasingFunctionWithStepCount(int32_t stepCount, Windows::UI::Composition::IStepEasingFunction ** result) = 0;
};

struct __declspec(uuid("02f6bc74-ed20-4773-afe6-d49b4a93db32")) __declspec(novtable) IContainerVisual : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Children(Windows::UI::Composition::IVisualCollection ** value) = 0;
};

struct __declspec(uuid("0363a65b-c7da-4d9a-95f4-69b5c8df670b")) __declspec(novtable) IContainerVisualFactory : Windows::IInspectable
{
};

struct __declspec(uuid("32350666-c1e8-44f9-96b8-c98acf0ae698")) __declspec(novtable) ICubicBezierEasingFunction : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ControlPoint1(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall get_ControlPoint2(Windows::Foundation::Numerics::float2 * value) = 0;
};

struct __declspec(uuid("318cfafc-5ce3-4b55-ab5d-07a00353ac99")) __declspec(novtable) IDistantLight : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Color(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Color(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_CoordinateSpace(Windows::UI::Composition::IVisual ** value) = 0;
    virtual HRESULT __stdcall put_CoordinateSpace(Windows::UI::Composition::IVisual * value) = 0;
    virtual HRESULT __stdcall get_Direction(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Direction(Windows::Foundation::Numerics::float3 value) = 0;
};

struct __declspec(uuid("cb977c07-a154-4851-85e7-a8924c84fad8")) __declspec(novtable) IDropShadow : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BlurRadius(float * value) = 0;
    virtual HRESULT __stdcall put_BlurRadius(float value) = 0;
    virtual HRESULT __stdcall get_Color(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Color(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_Mask(Windows::UI::Composition::ICompositionBrush ** value) = 0;
    virtual HRESULT __stdcall put_Mask(Windows::UI::Composition::ICompositionBrush * value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Opacity(float * value) = 0;
    virtual HRESULT __stdcall put_Opacity(float value) = 0;
};

struct __declspec(uuid("6acc5431-7d3d-4bf3-abb6-f44bdc4888c1")) __declspec(novtable) IExpressionAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Expression(hstring * value) = 0;
    virtual HRESULT __stdcall put_Expression(hstring value) = 0;
};

struct __declspec(uuid("0598a3ff-0a92-4c9d-a427-b25519250dbf")) __declspec(novtable) IImplicitAnimationCollection : Windows::IInspectable
{
};

struct __declspec(uuid("1e73e647-84c7-477a-b474-5880e0442e15")) __declspec(novtable) IInsetClip : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BottomInset(float * value) = 0;
    virtual HRESULT __stdcall put_BottomInset(float value) = 0;
    virtual HRESULT __stdcall get_LeftInset(float * value) = 0;
    virtual HRESULT __stdcall put_LeftInset(float value) = 0;
    virtual HRESULT __stdcall get_RightInset(float * value) = 0;
    virtual HRESULT __stdcall put_RightInset(float value) = 0;
    virtual HRESULT __stdcall get_TopInset(float * value) = 0;
    virtual HRESULT __stdcall put_TopInset(float value) = 0;
};

struct __declspec(uuid("126e7f22-3ae9-4540-9a8a-deae8a4a4a84")) __declspec(novtable) IKeyFrameAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DelayTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_DelayTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_IterationBehavior(winrt::Windows::UI::Composition::AnimationIterationBehavior * value) = 0;
    virtual HRESULT __stdcall put_IterationBehavior(winrt::Windows::UI::Composition::AnimationIterationBehavior value) = 0;
    virtual HRESULT __stdcall get_IterationCount(int32_t * value) = 0;
    virtual HRESULT __stdcall put_IterationCount(int32_t value) = 0;
    virtual HRESULT __stdcall get_KeyFrameCount(int32_t * value) = 0;
    virtual HRESULT __stdcall get_StopBehavior(winrt::Windows::UI::Composition::AnimationStopBehavior * value) = 0;
    virtual HRESULT __stdcall put_StopBehavior(winrt::Windows::UI::Composition::AnimationStopBehavior value) = 0;
    virtual HRESULT __stdcall abi_InsertExpressionKeyFrame(float normalizedProgressKey, hstring value) = 0;
    virtual HRESULT __stdcall abi_InsertExpressionKeyFrameWithEasingFunction(float normalizedProgressKey, hstring value, Windows::UI::Composition::ICompositionEasingFunction * easingFunction) = 0;
};

struct __declspec(uuid("f4b488bb-2940-4ec0-a41a-eb6d801a2f18")) __declspec(novtable) IKeyFrameAnimation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Direction(winrt::Windows::UI::Composition::AnimationDirection * value) = 0;
    virtual HRESULT __stdcall put_Direction(winrt::Windows::UI::Composition::AnimationDirection value) = 0;
};

struct __declspec(uuid("bf0803f8-712a-4fc1-8c87-970859ed8d2e")) __declspec(novtable) IKeyFrameAnimationFactory : Windows::IInspectable
{
};

struct __declspec(uuid("af843985-0444-4887-8e83-b40b253f822c")) __declspec(novtable) ILayerVisual : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Effect(Windows::UI::Composition::ICompositionEffectBrush ** value) = 0;
    virtual HRESULT __stdcall put_Effect(Windows::UI::Composition::ICompositionEffectBrush * value) = 0;
};

struct __declspec(uuid("9400975a-c7a6-46b3-acf7-1a268a0a117d")) __declspec(novtable) ILinearEasingFunction : Windows::IInspectable
{
};

struct __declspec(uuid("b18545b3-0c5a-4ab0-bedc-4f3546948272")) __declspec(novtable) IPointLight : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Color(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Color(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_ConstantAttenuation(float * value) = 0;
    virtual HRESULT __stdcall put_ConstantAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_CoordinateSpace(Windows::UI::Composition::IVisual ** value) = 0;
    virtual HRESULT __stdcall put_CoordinateSpace(Windows::UI::Composition::IVisual * value) = 0;
    virtual HRESULT __stdcall get_LinearAttenuation(float * value) = 0;
    virtual HRESULT __stdcall put_LinearAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_QuadraticAttenuation(float * value) = 0;
    virtual HRESULT __stdcall put_QuadraticAttenuation(float value) = 0;
};

struct __declspec(uuid("404e5835-ecf6-4240-8520-671279cf36bc")) __declspec(novtable) IQuaternionKeyFrameAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion value, Windows::UI::Composition::ICompositionEasingFunction * easingFunction) = 0;
};

struct __declspec(uuid("3a31ac7d-28bf-4e7a-8524-71679d480f38")) __declspec(novtable) IRenderingDeviceReplacedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_GraphicsDevice(Windows::UI::Composition::ICompositionGraphicsDevice ** value) = 0;
};

struct __declspec(uuid("ae288fa9-252c-4b95-a725-bf85e38000a1")) __declspec(novtable) IScalarKeyFrameAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, float value) = 0;
    virtual HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, float value, Windows::UI::Composition::ICompositionEasingFunction * easingFunction) = 0;
};

struct __declspec(uuid("5a9fe273-44a1-4f95-a422-8fa5116bdb44")) __declspec(novtable) ISpotLight : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ConstantAttenuation(float * value) = 0;
    virtual HRESULT __stdcall put_ConstantAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_CoordinateSpace(Windows::UI::Composition::IVisual ** value) = 0;
    virtual HRESULT __stdcall put_CoordinateSpace(Windows::UI::Composition::IVisual * value) = 0;
    virtual HRESULT __stdcall get_Direction(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Direction(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_InnerConeAngle(float * value) = 0;
    virtual HRESULT __stdcall put_InnerConeAngle(float value) = 0;
    virtual HRESULT __stdcall get_InnerConeAngleInDegrees(float * value) = 0;
    virtual HRESULT __stdcall put_InnerConeAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_InnerConeColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_InnerConeColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_LinearAttenuation(float * value) = 0;
    virtual HRESULT __stdcall put_LinearAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_OuterConeAngle(float * value) = 0;
    virtual HRESULT __stdcall put_OuterConeAngle(float value) = 0;
    virtual HRESULT __stdcall get_OuterConeAngleInDegrees(float * value) = 0;
    virtual HRESULT __stdcall put_OuterConeAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_OuterConeColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_OuterConeColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_QuadraticAttenuation(float * value) = 0;
    virtual HRESULT __stdcall put_QuadraticAttenuation(float value) = 0;
};

struct __declspec(uuid("08e05581-1ad1-4f97-9757-402d76e4233b")) __declspec(novtable) ISpriteVisual : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Brush(Windows::UI::Composition::ICompositionBrush ** value) = 0;
    virtual HRESULT __stdcall put_Brush(Windows::UI::Composition::ICompositionBrush * value) = 0;
};

struct __declspec(uuid("588c9664-997a-4850-91fe-53cb58f81ce9")) __declspec(novtable) ISpriteVisual2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Shadow(Windows::UI::Composition::ICompositionShadow ** value) = 0;
    virtual HRESULT __stdcall put_Shadow(Windows::UI::Composition::ICompositionShadow * value) = 0;
};

struct __declspec(uuid("d0caa74b-560c-4a0b-a5f6-206ca8c3ecd6")) __declspec(novtable) IStepEasingFunction : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FinalStep(int32_t * value) = 0;
    virtual HRESULT __stdcall put_FinalStep(int32_t value) = 0;
    virtual HRESULT __stdcall get_InitialStep(int32_t * value) = 0;
    virtual HRESULT __stdcall put_InitialStep(int32_t value) = 0;
    virtual HRESULT __stdcall get_IsFinalStepSingleFrame(bool * value) = 0;
    virtual HRESULT __stdcall put_IsFinalStepSingleFrame(bool value) = 0;
    virtual HRESULT __stdcall get_IsInitialStepSingleFrame(bool * value) = 0;
    virtual HRESULT __stdcall put_IsInitialStepSingleFrame(bool value) = 0;
    virtual HRESULT __stdcall get_StepCount(int32_t * value) = 0;
    virtual HRESULT __stdcall put_StepCount(int32_t value) = 0;
};

struct __declspec(uuid("df414515-4e29-4f11-b55e-bf2a6eb36294")) __declspec(novtable) IVector2KeyFrameAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::float2 value, Windows::UI::Composition::ICompositionEasingFunction * easingFunction) = 0;
};

struct __declspec(uuid("c8039daa-a281-43c2-a73d-b68e3c533c40")) __declspec(novtable) IVector3KeyFrameAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::float3 value, Windows::UI::Composition::ICompositionEasingFunction * easingFunction) = 0;
};

struct __declspec(uuid("2457945b-addd-4385-9606-b6a3d5e4e1b9")) __declspec(novtable) IVector4KeyFrameAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::float4 value, Windows::UI::Composition::ICompositionEasingFunction * easingFunction) = 0;
};

struct __declspec(uuid("117e202d-a859-4c89-873b-c2aa566788e3")) __declspec(novtable) IVisual : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_BackfaceVisibility(winrt::Windows::UI::Composition::CompositionBackfaceVisibility * value) = 0;
    virtual HRESULT __stdcall put_BackfaceVisibility(winrt::Windows::UI::Composition::CompositionBackfaceVisibility value) = 0;
    virtual HRESULT __stdcall get_BorderMode(winrt::Windows::UI::Composition::CompositionBorderMode * value) = 0;
    virtual HRESULT __stdcall put_BorderMode(winrt::Windows::UI::Composition::CompositionBorderMode value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Clip(Windows::UI::Composition::ICompositionClip ** value) = 0;
    virtual HRESULT __stdcall put_Clip(Windows::UI::Composition::ICompositionClip * value) = 0;
    virtual HRESULT __stdcall get_CompositeMode(winrt::Windows::UI::Composition::CompositionCompositeMode * value) = 0;
    virtual HRESULT __stdcall put_CompositeMode(winrt::Windows::UI::Composition::CompositionCompositeMode value) = 0;
    virtual HRESULT __stdcall get_IsVisible(bool * value) = 0;
    virtual HRESULT __stdcall put_IsVisible(bool value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Opacity(float * value) = 0;
    virtual HRESULT __stdcall put_Opacity(float value) = 0;
    virtual HRESULT __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion * value) = 0;
    virtual HRESULT __stdcall put_Orientation(Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall get_Parent(Windows::UI::Composition::IContainerVisual ** value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float * value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float * value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_RotationAxis(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_RotationAxis(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Numerics::float2 * value) = 0;
    virtual HRESULT __stdcall put_Size(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float4x4 * value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float4x4 value) = 0;
};

struct __declspec(uuid("8b745505-fd3e-4a98-84a8-e949468c6bcb")) __declspec(novtable) IVisualCollection : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Count(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_InsertAbove(Windows::UI::Composition::IVisual * newChild, Windows::UI::Composition::IVisual * sibling) = 0;
    virtual HRESULT __stdcall abi_InsertAtBottom(Windows::UI::Composition::IVisual * newChild) = 0;
    virtual HRESULT __stdcall abi_InsertAtTop(Windows::UI::Composition::IVisual * newChild) = 0;
    virtual HRESULT __stdcall abi_InsertBelow(Windows::UI::Composition::IVisual * newChild, Windows::UI::Composition::IVisual * sibling) = 0;
    virtual HRESULT __stdcall abi_Remove(Windows::UI::Composition::IVisual * child) = 0;
    virtual HRESULT __stdcall abi_RemoveAll() = 0;
};

struct __declspec(uuid("ad0ff93e-b502-4eb5-87b4-9a38a71d0137")) __declspec(novtable) IVisualFactory : Windows::IInspectable
{
};

struct __declspec(uuid("338faa70-54c8-40a7-8029-c9ceeb0aa250")) __declspec(novtable) IVisualUnorderedCollection : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Count(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_Add(Windows::UI::Composition::IVisual * newVisual) = 0;
    virtual HRESULT __stdcall abi_Remove(Windows::UI::Composition::IVisual * visual) = 0;
    virtual HRESULT __stdcall abi_RemoveAll() = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Composition::AmbientLight> { using default_interface = Windows::UI::Composition::IAmbientLight; };
template <> struct traits<Windows::UI::Composition::ColorKeyFrameAnimation> { using default_interface = Windows::UI::Composition::IColorKeyFrameAnimation; };
template <> struct traits<Windows::UI::Composition::CompositionAnimation> { using default_interface = Windows::UI::Composition::ICompositionAnimation; };
template <> struct traits<Windows::UI::Composition::CompositionAnimationGroup> { using default_interface = Windows::UI::Composition::ICompositionAnimationGroup; };
template <> struct traits<Windows::UI::Composition::CompositionBackdropBrush> { using default_interface = Windows::UI::Composition::ICompositionBackdropBrush; };
template <> struct traits<Windows::UI::Composition::CompositionBatchCompletedEventArgs> { using default_interface = Windows::UI::Composition::ICompositionBatchCompletedEventArgs; };
template <> struct traits<Windows::UI::Composition::CompositionBrush> { using default_interface = Windows::UI::Composition::ICompositionBrush; };
template <> struct traits<Windows::UI::Composition::CompositionClip> { using default_interface = Windows::UI::Composition::ICompositionClip; };
template <> struct traits<Windows::UI::Composition::CompositionColorBrush> { using default_interface = Windows::UI::Composition::ICompositionColorBrush; };
template <> struct traits<Windows::UI::Composition::CompositionCommitBatch> { using default_interface = Windows::UI::Composition::ICompositionCommitBatch; };
template <> struct traits<Windows::UI::Composition::CompositionDrawingSurface> { using default_interface = Windows::UI::Composition::ICompositionDrawingSurface; };
template <> struct traits<Windows::UI::Composition::CompositionEasingFunction> { using default_interface = Windows::UI::Composition::ICompositionEasingFunction; };
template <> struct traits<Windows::UI::Composition::CompositionEffectBrush> { using default_interface = Windows::UI::Composition::ICompositionEffectBrush; };
template <> struct traits<Windows::UI::Composition::CompositionEffectFactory> { using default_interface = Windows::UI::Composition::ICompositionEffectFactory; };
template <> struct traits<Windows::UI::Composition::CompositionEffectSourceParameter> { using default_interface = Windows::UI::Composition::ICompositionEffectSourceParameter; };
template <> struct traits<Windows::UI::Composition::CompositionGraphicsDevice> { using default_interface = Windows::UI::Composition::ICompositionGraphicsDevice; };
template <> struct traits<Windows::UI::Composition::CompositionLight> { using default_interface = Windows::UI::Composition::ICompositionLight; };
template <> struct traits<Windows::UI::Composition::CompositionMaskBrush> { using default_interface = Windows::UI::Composition::ICompositionMaskBrush; };
template <> struct traits<Windows::UI::Composition::CompositionNineGridBrush> { using default_interface = Windows::UI::Composition::ICompositionNineGridBrush; };
template <> struct traits<Windows::UI::Composition::CompositionObject> { using default_interface = Windows::UI::Composition::ICompositionObject; };
template <> struct traits<Windows::UI::Composition::CompositionPropertySet> { using default_interface = Windows::UI::Composition::ICompositionPropertySet; };
template <> struct traits<Windows::UI::Composition::CompositionScopedBatch> { using default_interface = Windows::UI::Composition::ICompositionScopedBatch; };
template <> struct traits<Windows::UI::Composition::CompositionShadow> { using default_interface = Windows::UI::Composition::ICompositionShadow; };
template <> struct traits<Windows::UI::Composition::CompositionSurfaceBrush> { using default_interface = Windows::UI::Composition::ICompositionSurfaceBrush; };
template <> struct traits<Windows::UI::Composition::CompositionTarget> { using default_interface = Windows::UI::Composition::ICompositionTarget; };
template <> struct traits<Windows::UI::Composition::Compositor> { using default_interface = Windows::UI::Composition::ICompositor; };
template <> struct traits<Windows::UI::Composition::ContainerVisual> { using default_interface = Windows::UI::Composition::IContainerVisual; };
template <> struct traits<Windows::UI::Composition::CubicBezierEasingFunction> { using default_interface = Windows::UI::Composition::ICubicBezierEasingFunction; };
template <> struct traits<Windows::UI::Composition::DistantLight> { using default_interface = Windows::UI::Composition::IDistantLight; };
template <> struct traits<Windows::UI::Composition::DropShadow> { using default_interface = Windows::UI::Composition::IDropShadow; };
template <> struct traits<Windows::UI::Composition::ExpressionAnimation> { using default_interface = Windows::UI::Composition::IExpressionAnimation; };
template <> struct traits<Windows::UI::Composition::ImplicitAnimationCollection> { using default_interface = Windows::UI::Composition::IImplicitAnimationCollection; };
template <> struct traits<Windows::UI::Composition::InsetClip> { using default_interface = Windows::UI::Composition::IInsetClip; };
template <> struct traits<Windows::UI::Composition::KeyFrameAnimation> { using default_interface = Windows::UI::Composition::IKeyFrameAnimation; };
template <> struct traits<Windows::UI::Composition::LayerVisual> { using default_interface = Windows::UI::Composition::ILayerVisual; };
template <> struct traits<Windows::UI::Composition::LinearEasingFunction> { using default_interface = Windows::UI::Composition::ILinearEasingFunction; };
template <> struct traits<Windows::UI::Composition::PointLight> { using default_interface = Windows::UI::Composition::IPointLight; };
template <> struct traits<Windows::UI::Composition::QuaternionKeyFrameAnimation> { using default_interface = Windows::UI::Composition::IQuaternionKeyFrameAnimation; };
template <> struct traits<Windows::UI::Composition::RenderingDeviceReplacedEventArgs> { using default_interface = Windows::UI::Composition::IRenderingDeviceReplacedEventArgs; };
template <> struct traits<Windows::UI::Composition::ScalarKeyFrameAnimation> { using default_interface = Windows::UI::Composition::IScalarKeyFrameAnimation; };
template <> struct traits<Windows::UI::Composition::SpotLight> { using default_interface = Windows::UI::Composition::ISpotLight; };
template <> struct traits<Windows::UI::Composition::SpriteVisual> { using default_interface = Windows::UI::Composition::ISpriteVisual; };
template <> struct traits<Windows::UI::Composition::StepEasingFunction> { using default_interface = Windows::UI::Composition::IStepEasingFunction; };
template <> struct traits<Windows::UI::Composition::Vector2KeyFrameAnimation> { using default_interface = Windows::UI::Composition::IVector2KeyFrameAnimation; };
template <> struct traits<Windows::UI::Composition::Vector3KeyFrameAnimation> { using default_interface = Windows::UI::Composition::IVector3KeyFrameAnimation; };
template <> struct traits<Windows::UI::Composition::Vector4KeyFrameAnimation> { using default_interface = Windows::UI::Composition::IVector4KeyFrameAnimation; };
template <> struct traits<Windows::UI::Composition::Visual> { using default_interface = Windows::UI::Composition::IVisual; };
template <> struct traits<Windows::UI::Composition::VisualCollection> { using default_interface = Windows::UI::Composition::IVisualCollection; };
template <> struct traits<Windows::UI::Composition::VisualUnorderedCollection> { using default_interface = Windows::UI::Composition::IVisualUnorderedCollection; };

}

namespace Windows::UI::Composition {

template <typename T> struct impl_IAmbientLight;
template <typename T> struct impl_IColorKeyFrameAnimation;
template <typename T> struct impl_ICompositionAnimation;
template <typename T> struct impl_ICompositionAnimation2;
template <typename T> struct impl_ICompositionAnimationBase;
template <typename T> struct impl_ICompositionAnimationFactory;
template <typename T> struct impl_ICompositionAnimationGroup;
template <typename T> struct impl_ICompositionBackdropBrush;
template <typename T> struct impl_ICompositionBatchCompletedEventArgs;
template <typename T> struct impl_ICompositionBrush;
template <typename T> struct impl_ICompositionBrushFactory;
template <typename T> struct impl_ICompositionClip;
template <typename T> struct impl_ICompositionClip2;
template <typename T> struct impl_ICompositionClipFactory;
template <typename T> struct impl_ICompositionColorBrush;
template <typename T> struct impl_ICompositionCommitBatch;
template <typename T> struct impl_ICompositionDrawingSurface;
template <typename T> struct impl_ICompositionEasingFunction;
template <typename T> struct impl_ICompositionEasingFunctionFactory;
template <typename T> struct impl_ICompositionEffectBrush;
template <typename T> struct impl_ICompositionEffectFactory;
template <typename T> struct impl_ICompositionEffectSourceParameter;
template <typename T> struct impl_ICompositionEffectSourceParameterFactory;
template <typename T> struct impl_ICompositionGraphicsDevice;
template <typename T> struct impl_ICompositionLight;
template <typename T> struct impl_ICompositionLightFactory;
template <typename T> struct impl_ICompositionMaskBrush;
template <typename T> struct impl_ICompositionNineGridBrush;
template <typename T> struct impl_ICompositionObject;
template <typename T> struct impl_ICompositionObject2;
template <typename T> struct impl_ICompositionObjectFactory;
template <typename T> struct impl_ICompositionPropertySet;
template <typename T> struct impl_ICompositionPropertySet2;
template <typename T> struct impl_ICompositionScopedBatch;
template <typename T> struct impl_ICompositionShadow;
template <typename T> struct impl_ICompositionShadowFactory;
template <typename T> struct impl_ICompositionSurface;
template <typename T> struct impl_ICompositionSurfaceBrush;
template <typename T> struct impl_ICompositionSurfaceBrush2;
template <typename T> struct impl_ICompositionTarget;
template <typename T> struct impl_ICompositor;
template <typename T> struct impl_ICompositor2;
template <typename T> struct impl_IContainerVisual;
template <typename T> struct impl_IContainerVisualFactory;
template <typename T> struct impl_ICubicBezierEasingFunction;
template <typename T> struct impl_IDistantLight;
template <typename T> struct impl_IDropShadow;
template <typename T> struct impl_IExpressionAnimation;
template <typename T> struct impl_IImplicitAnimationCollection;
template <typename T> struct impl_IInsetClip;
template <typename T> struct impl_IKeyFrameAnimation;
template <typename T> struct impl_IKeyFrameAnimation2;
template <typename T> struct impl_IKeyFrameAnimationFactory;
template <typename T> struct impl_ILayerVisual;
template <typename T> struct impl_ILinearEasingFunction;
template <typename T> struct impl_IPointLight;
template <typename T> struct impl_IQuaternionKeyFrameAnimation;
template <typename T> struct impl_IRenderingDeviceReplacedEventArgs;
template <typename T> struct impl_IScalarKeyFrameAnimation;
template <typename T> struct impl_ISpotLight;
template <typename T> struct impl_ISpriteVisual;
template <typename T> struct impl_ISpriteVisual2;
template <typename T> struct impl_IStepEasingFunction;
template <typename T> struct impl_IVector2KeyFrameAnimation;
template <typename T> struct impl_IVector3KeyFrameAnimation;
template <typename T> struct impl_IVector4KeyFrameAnimation;
template <typename T> struct impl_IVisual;
template <typename T> struct impl_IVisualCollection;
template <typename T> struct impl_IVisualFactory;
template <typename T> struct impl_IVisualUnorderedCollection;

}

namespace impl {

template <> struct traits<Windows::UI::Composition::IAmbientLight>
{
    using abi = ABI::Windows::UI::Composition::IAmbientLight;
    template <typename D> using consume = Windows::UI::Composition::impl_IAmbientLight<D>;
};

template <> struct traits<Windows::UI::Composition::IColorKeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::IColorKeyFrameAnimation;
    template <typename D> using consume = Windows::UI::Composition::impl_IColorKeyFrameAnimation<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionAnimation>
{
    using abi = ABI::Windows::UI::Composition::ICompositionAnimation;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionAnimation<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionAnimation2>
{
    using abi = ABI::Windows::UI::Composition::ICompositionAnimation2;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionAnimation2<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionAnimationBase>
{
    using abi = ABI::Windows::UI::Composition::ICompositionAnimationBase;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionAnimationBase<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionAnimationFactory>
{
    using abi = ABI::Windows::UI::Composition::ICompositionAnimationFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionAnimationFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionAnimationGroup>
{
    using abi = ABI::Windows::UI::Composition::ICompositionAnimationGroup;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionAnimationGroup<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionBackdropBrush>
{
    using abi = ABI::Windows::UI::Composition::ICompositionBackdropBrush;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionBackdropBrush<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Composition::ICompositionBatchCompletedEventArgs;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionBatchCompletedEventArgs<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionBrush>
{
    using abi = ABI::Windows::UI::Composition::ICompositionBrush;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionBrush<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionBrushFactory>
{
    using abi = ABI::Windows::UI::Composition::ICompositionBrushFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionBrushFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionClip>
{
    using abi = ABI::Windows::UI::Composition::ICompositionClip;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionClip<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionClip2>
{
    using abi = ABI::Windows::UI::Composition::ICompositionClip2;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionClip2<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionClipFactory>
{
    using abi = ABI::Windows::UI::Composition::ICompositionClipFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionClipFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionColorBrush>
{
    using abi = ABI::Windows::UI::Composition::ICompositionColorBrush;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionColorBrush<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionCommitBatch>
{
    using abi = ABI::Windows::UI::Composition::ICompositionCommitBatch;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionCommitBatch<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionDrawingSurface>
{
    using abi = ABI::Windows::UI::Composition::ICompositionDrawingSurface;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionDrawingSurface<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionEasingFunction>
{
    using abi = ABI::Windows::UI::Composition::ICompositionEasingFunction;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionEasingFunction<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionEasingFunctionFactory>
{
    using abi = ABI::Windows::UI::Composition::ICompositionEasingFunctionFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionEasingFunctionFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionEffectBrush>
{
    using abi = ABI::Windows::UI::Composition::ICompositionEffectBrush;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionEffectBrush<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionEffectFactory>
{
    using abi = ABI::Windows::UI::Composition::ICompositionEffectFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionEffectFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionEffectSourceParameter>
{
    using abi = ABI::Windows::UI::Composition::ICompositionEffectSourceParameter;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionEffectSourceParameter<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>
{
    using abi = ABI::Windows::UI::Composition::ICompositionEffectSourceParameterFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionEffectSourceParameterFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionGraphicsDevice>
{
    using abi = ABI::Windows::UI::Composition::ICompositionGraphicsDevice;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionGraphicsDevice<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionLight>
{
    using abi = ABI::Windows::UI::Composition::ICompositionLight;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionLight<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionLightFactory>
{
    using abi = ABI::Windows::UI::Composition::ICompositionLightFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionLightFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionMaskBrush>
{
    using abi = ABI::Windows::UI::Composition::ICompositionMaskBrush;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionMaskBrush<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionNineGridBrush>
{
    using abi = ABI::Windows::UI::Composition::ICompositionNineGridBrush;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionNineGridBrush<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionObject>
{
    using abi = ABI::Windows::UI::Composition::ICompositionObject;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionObject<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionObject2>
{
    using abi = ABI::Windows::UI::Composition::ICompositionObject2;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionObject2<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionObjectFactory>
{
    using abi = ABI::Windows::UI::Composition::ICompositionObjectFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionObjectFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionPropertySet>
{
    using abi = ABI::Windows::UI::Composition::ICompositionPropertySet;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionPropertySet<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionPropertySet2>
{
    using abi = ABI::Windows::UI::Composition::ICompositionPropertySet2;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionPropertySet2<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionScopedBatch>
{
    using abi = ABI::Windows::UI::Composition::ICompositionScopedBatch;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionScopedBatch<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionShadow>
{
    using abi = ABI::Windows::UI::Composition::ICompositionShadow;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionShadow<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionShadowFactory>
{
    using abi = ABI::Windows::UI::Composition::ICompositionShadowFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionShadowFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionSurface>
{
    using abi = ABI::Windows::UI::Composition::ICompositionSurface;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionSurface<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionSurfaceBrush>
{
    using abi = ABI::Windows::UI::Composition::ICompositionSurfaceBrush;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionSurfaceBrush<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionSurfaceBrush2>
{
    using abi = ABI::Windows::UI::Composition::ICompositionSurfaceBrush2;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionSurfaceBrush2<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositionTarget>
{
    using abi = ABI::Windows::UI::Composition::ICompositionTarget;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositionTarget<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositor>
{
    using abi = ABI::Windows::UI::Composition::ICompositor;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositor<D>;
};

template <> struct traits<Windows::UI::Composition::ICompositor2>
{
    using abi = ABI::Windows::UI::Composition::ICompositor2;
    template <typename D> using consume = Windows::UI::Composition::impl_ICompositor2<D>;
};

template <> struct traits<Windows::UI::Composition::IContainerVisual>
{
    using abi = ABI::Windows::UI::Composition::IContainerVisual;
    template <typename D> using consume = Windows::UI::Composition::impl_IContainerVisual<D>;
};

template <> struct traits<Windows::UI::Composition::IContainerVisualFactory>
{
    using abi = ABI::Windows::UI::Composition::IContainerVisualFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_IContainerVisualFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ICubicBezierEasingFunction>
{
    using abi = ABI::Windows::UI::Composition::ICubicBezierEasingFunction;
    template <typename D> using consume = Windows::UI::Composition::impl_ICubicBezierEasingFunction<D>;
};

template <> struct traits<Windows::UI::Composition::IDistantLight>
{
    using abi = ABI::Windows::UI::Composition::IDistantLight;
    template <typename D> using consume = Windows::UI::Composition::impl_IDistantLight<D>;
};

template <> struct traits<Windows::UI::Composition::IDropShadow>
{
    using abi = ABI::Windows::UI::Composition::IDropShadow;
    template <typename D> using consume = Windows::UI::Composition::impl_IDropShadow<D>;
};

template <> struct traits<Windows::UI::Composition::IExpressionAnimation>
{
    using abi = ABI::Windows::UI::Composition::IExpressionAnimation;
    template <typename D> using consume = Windows::UI::Composition::impl_IExpressionAnimation<D>;
};

template <> struct traits<Windows::UI::Composition::IImplicitAnimationCollection>
{
    using abi = ABI::Windows::UI::Composition::IImplicitAnimationCollection;
    template <typename D> using consume = Windows::UI::Composition::impl_IImplicitAnimationCollection<D>;
};

template <> struct traits<Windows::UI::Composition::IInsetClip>
{
    using abi = ABI::Windows::UI::Composition::IInsetClip;
    template <typename D> using consume = Windows::UI::Composition::impl_IInsetClip<D>;
};

template <> struct traits<Windows::UI::Composition::IKeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::IKeyFrameAnimation;
    template <typename D> using consume = Windows::UI::Composition::impl_IKeyFrameAnimation<D>;
};

template <> struct traits<Windows::UI::Composition::IKeyFrameAnimation2>
{
    using abi = ABI::Windows::UI::Composition::IKeyFrameAnimation2;
    template <typename D> using consume = Windows::UI::Composition::impl_IKeyFrameAnimation2<D>;
};

template <> struct traits<Windows::UI::Composition::IKeyFrameAnimationFactory>
{
    using abi = ABI::Windows::UI::Composition::IKeyFrameAnimationFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_IKeyFrameAnimationFactory<D>;
};

template <> struct traits<Windows::UI::Composition::ILayerVisual>
{
    using abi = ABI::Windows::UI::Composition::ILayerVisual;
    template <typename D> using consume = Windows::UI::Composition::impl_ILayerVisual<D>;
};

template <> struct traits<Windows::UI::Composition::ILinearEasingFunction>
{
    using abi = ABI::Windows::UI::Composition::ILinearEasingFunction;
    template <typename D> using consume = Windows::UI::Composition::impl_ILinearEasingFunction<D>;
};

template <> struct traits<Windows::UI::Composition::IPointLight>
{
    using abi = ABI::Windows::UI::Composition::IPointLight;
    template <typename D> using consume = Windows::UI::Composition::impl_IPointLight<D>;
};

template <> struct traits<Windows::UI::Composition::IQuaternionKeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::IQuaternionKeyFrameAnimation;
    template <typename D> using consume = Windows::UI::Composition::impl_IQuaternionKeyFrameAnimation<D>;
};

template <> struct traits<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>
{
    using abi = ABI::Windows::UI::Composition::IRenderingDeviceReplacedEventArgs;
    template <typename D> using consume = Windows::UI::Composition::impl_IRenderingDeviceReplacedEventArgs<D>;
};

template <> struct traits<Windows::UI::Composition::IScalarKeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::IScalarKeyFrameAnimation;
    template <typename D> using consume = Windows::UI::Composition::impl_IScalarKeyFrameAnimation<D>;
};

template <> struct traits<Windows::UI::Composition::ISpotLight>
{
    using abi = ABI::Windows::UI::Composition::ISpotLight;
    template <typename D> using consume = Windows::UI::Composition::impl_ISpotLight<D>;
};

template <> struct traits<Windows::UI::Composition::ISpriteVisual>
{
    using abi = ABI::Windows::UI::Composition::ISpriteVisual;
    template <typename D> using consume = Windows::UI::Composition::impl_ISpriteVisual<D>;
};

template <> struct traits<Windows::UI::Composition::ISpriteVisual2>
{
    using abi = ABI::Windows::UI::Composition::ISpriteVisual2;
    template <typename D> using consume = Windows::UI::Composition::impl_ISpriteVisual2<D>;
};

template <> struct traits<Windows::UI::Composition::IStepEasingFunction>
{
    using abi = ABI::Windows::UI::Composition::IStepEasingFunction;
    template <typename D> using consume = Windows::UI::Composition::impl_IStepEasingFunction<D>;
};

template <> struct traits<Windows::UI::Composition::IVector2KeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::IVector2KeyFrameAnimation;
    template <typename D> using consume = Windows::UI::Composition::impl_IVector2KeyFrameAnimation<D>;
};

template <> struct traits<Windows::UI::Composition::IVector3KeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::IVector3KeyFrameAnimation;
    template <typename D> using consume = Windows::UI::Composition::impl_IVector3KeyFrameAnimation<D>;
};

template <> struct traits<Windows::UI::Composition::IVector4KeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::IVector4KeyFrameAnimation;
    template <typename D> using consume = Windows::UI::Composition::impl_IVector4KeyFrameAnimation<D>;
};

template <> struct traits<Windows::UI::Composition::IVisual>
{
    using abi = ABI::Windows::UI::Composition::IVisual;
    template <typename D> using consume = Windows::UI::Composition::impl_IVisual<D>;
};

template <> struct traits<Windows::UI::Composition::IVisualCollection>
{
    using abi = ABI::Windows::UI::Composition::IVisualCollection;
    template <typename D> using consume = Windows::UI::Composition::impl_IVisualCollection<D>;
};

template <> struct traits<Windows::UI::Composition::IVisualFactory>
{
    using abi = ABI::Windows::UI::Composition::IVisualFactory;
    template <typename D> using consume = Windows::UI::Composition::impl_IVisualFactory<D>;
};

template <> struct traits<Windows::UI::Composition::IVisualUnorderedCollection>
{
    using abi = ABI::Windows::UI::Composition::IVisualUnorderedCollection;
    template <typename D> using consume = Windows::UI::Composition::impl_IVisualUnorderedCollection<D>;
};

template <> struct traits<Windows::UI::Composition::AmbientLight>
{
    using abi = ABI::Windows::UI::Composition::AmbientLight;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.AmbientLight"; }
};

template <> struct traits<Windows::UI::Composition::ColorKeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::ColorKeyFrameAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.ColorKeyFrameAnimation"; }
};

template <> struct traits<Windows::UI::Composition::CompositionAnimation>
{
    using abi = ABI::Windows::UI::Composition::CompositionAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionAnimation"; }
};

template <> struct traits<Windows::UI::Composition::CompositionAnimationGroup>
{
    using abi = ABI::Windows::UI::Composition::CompositionAnimationGroup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionAnimationGroup"; }
};

template <> struct traits<Windows::UI::Composition::CompositionBackdropBrush>
{
    using abi = ABI::Windows::UI::Composition::CompositionBackdropBrush;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionBackdropBrush"; }
};

template <> struct traits<Windows::UI::Composition::CompositionBatchCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Composition::CompositionBatchCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionBatchCompletedEventArgs"; }
};

template <> struct traits<Windows::UI::Composition::CompositionBrush>
{
    using abi = ABI::Windows::UI::Composition::CompositionBrush;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionBrush"; }
};

template <> struct traits<Windows::UI::Composition::CompositionClip>
{
    using abi = ABI::Windows::UI::Composition::CompositionClip;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionClip"; }
};

template <> struct traits<Windows::UI::Composition::CompositionColorBrush>
{
    using abi = ABI::Windows::UI::Composition::CompositionColorBrush;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionColorBrush"; }
};

template <> struct traits<Windows::UI::Composition::CompositionCommitBatch>
{
    using abi = ABI::Windows::UI::Composition::CompositionCommitBatch;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionCommitBatch"; }
};

template <> struct traits<Windows::UI::Composition::CompositionDrawingSurface>
{
    using abi = ABI::Windows::UI::Composition::CompositionDrawingSurface;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionDrawingSurface"; }
};

template <> struct traits<Windows::UI::Composition::CompositionEasingFunction>
{
    using abi = ABI::Windows::UI::Composition::CompositionEasingFunction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionEasingFunction"; }
};

template <> struct traits<Windows::UI::Composition::CompositionEffectBrush>
{
    using abi = ABI::Windows::UI::Composition::CompositionEffectBrush;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionEffectBrush"; }
};

template <> struct traits<Windows::UI::Composition::CompositionEffectFactory>
{
    using abi = ABI::Windows::UI::Composition::CompositionEffectFactory;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionEffectFactory"; }
};

template <> struct traits<Windows::UI::Composition::CompositionEffectSourceParameter>
{
    using abi = ABI::Windows::UI::Composition::CompositionEffectSourceParameter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionEffectSourceParameter"; }
};

template <> struct traits<Windows::UI::Composition::CompositionGraphicsDevice>
{
    using abi = ABI::Windows::UI::Composition::CompositionGraphicsDevice;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionGraphicsDevice"; }
};

template <> struct traits<Windows::UI::Composition::CompositionLight>
{
    using abi = ABI::Windows::UI::Composition::CompositionLight;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionLight"; }
};

template <> struct traits<Windows::UI::Composition::CompositionMaskBrush>
{
    using abi = ABI::Windows::UI::Composition::CompositionMaskBrush;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionMaskBrush"; }
};

template <> struct traits<Windows::UI::Composition::CompositionNineGridBrush>
{
    using abi = ABI::Windows::UI::Composition::CompositionNineGridBrush;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionNineGridBrush"; }
};

template <> struct traits<Windows::UI::Composition::CompositionObject>
{
    using abi = ABI::Windows::UI::Composition::CompositionObject;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionObject"; }
};

template <> struct traits<Windows::UI::Composition::CompositionPropertySet>
{
    using abi = ABI::Windows::UI::Composition::CompositionPropertySet;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionPropertySet"; }
};

template <> struct traits<Windows::UI::Composition::CompositionScopedBatch>
{
    using abi = ABI::Windows::UI::Composition::CompositionScopedBatch;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionScopedBatch"; }
};

template <> struct traits<Windows::UI::Composition::CompositionShadow>
{
    using abi = ABI::Windows::UI::Composition::CompositionShadow;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionShadow"; }
};

template <> struct traits<Windows::UI::Composition::CompositionSurfaceBrush>
{
    using abi = ABI::Windows::UI::Composition::CompositionSurfaceBrush;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionSurfaceBrush"; }
};

template <> struct traits<Windows::UI::Composition::CompositionTarget>
{
    using abi = ABI::Windows::UI::Composition::CompositionTarget;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CompositionTarget"; }
};

template <> struct traits<Windows::UI::Composition::Compositor>
{
    using abi = ABI::Windows::UI::Composition::Compositor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.Compositor"; }
};

template <> struct traits<Windows::UI::Composition::ContainerVisual>
{
    using abi = ABI::Windows::UI::Composition::ContainerVisual;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.ContainerVisual"; }
};

template <> struct traits<Windows::UI::Composition::CubicBezierEasingFunction>
{
    using abi = ABI::Windows::UI::Composition::CubicBezierEasingFunction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.CubicBezierEasingFunction"; }
};

template <> struct traits<Windows::UI::Composition::DistantLight>
{
    using abi = ABI::Windows::UI::Composition::DistantLight;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.DistantLight"; }
};

template <> struct traits<Windows::UI::Composition::DropShadow>
{
    using abi = ABI::Windows::UI::Composition::DropShadow;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.DropShadow"; }
};

template <> struct traits<Windows::UI::Composition::ExpressionAnimation>
{
    using abi = ABI::Windows::UI::Composition::ExpressionAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.ExpressionAnimation"; }
};

template <> struct traits<Windows::UI::Composition::ImplicitAnimationCollection>
{
    using abi = ABI::Windows::UI::Composition::ImplicitAnimationCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.ImplicitAnimationCollection"; }
};

template <> struct traits<Windows::UI::Composition::InsetClip>
{
    using abi = ABI::Windows::UI::Composition::InsetClip;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.InsetClip"; }
};

template <> struct traits<Windows::UI::Composition::KeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::KeyFrameAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.KeyFrameAnimation"; }
};

template <> struct traits<Windows::UI::Composition::LayerVisual>
{
    using abi = ABI::Windows::UI::Composition::LayerVisual;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.LayerVisual"; }
};

template <> struct traits<Windows::UI::Composition::LinearEasingFunction>
{
    using abi = ABI::Windows::UI::Composition::LinearEasingFunction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.LinearEasingFunction"; }
};

template <> struct traits<Windows::UI::Composition::PointLight>
{
    using abi = ABI::Windows::UI::Composition::PointLight;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.PointLight"; }
};

template <> struct traits<Windows::UI::Composition::QuaternionKeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::QuaternionKeyFrameAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.QuaternionKeyFrameAnimation"; }
};

template <> struct traits<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>
{
    using abi = ABI::Windows::UI::Composition::RenderingDeviceReplacedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.RenderingDeviceReplacedEventArgs"; }
};

template <> struct traits<Windows::UI::Composition::ScalarKeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::ScalarKeyFrameAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.ScalarKeyFrameAnimation"; }
};

template <> struct traits<Windows::UI::Composition::SpotLight>
{
    using abi = ABI::Windows::UI::Composition::SpotLight;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.SpotLight"; }
};

template <> struct traits<Windows::UI::Composition::SpriteVisual>
{
    using abi = ABI::Windows::UI::Composition::SpriteVisual;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.SpriteVisual"; }
};

template <> struct traits<Windows::UI::Composition::StepEasingFunction>
{
    using abi = ABI::Windows::UI::Composition::StepEasingFunction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.StepEasingFunction"; }
};

template <> struct traits<Windows::UI::Composition::Vector2KeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::Vector2KeyFrameAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.Vector2KeyFrameAnimation"; }
};

template <> struct traits<Windows::UI::Composition::Vector3KeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::Vector3KeyFrameAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.Vector3KeyFrameAnimation"; }
};

template <> struct traits<Windows::UI::Composition::Vector4KeyFrameAnimation>
{
    using abi = ABI::Windows::UI::Composition::Vector4KeyFrameAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.Vector4KeyFrameAnimation"; }
};

template <> struct traits<Windows::UI::Composition::Visual>
{
    using abi = ABI::Windows::UI::Composition::Visual;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.Visual"; }
};

template <> struct traits<Windows::UI::Composition::VisualCollection>
{
    using abi = ABI::Windows::UI::Composition::VisualCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.VisualCollection"; }
};

template <> struct traits<Windows::UI::Composition::VisualUnorderedCollection>
{
    using abi = ABI::Windows::UI::Composition::VisualUnorderedCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Composition.VisualUnorderedCollection"; }
};

}

}
