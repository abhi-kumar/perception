// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Camera.ice'

#ifndef ____Camera_h__
#define ____Camera_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <CommonHead.h>
#include <DifferentialRobot.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace RoboCompCamera
{

class Camera;

}

}

namespace RoboCompCamera
{

class Camera;
bool operator==(const Camera&, const Camera&);
bool operator<(const Camera&, const Camera&);

}

namespace IceInternal
{

::Ice::Object* upCast(::RoboCompCamera::Camera*);
::IceProxy::Ice::Object* upCast(::IceProxy::RoboCompCamera::Camera*);

}

namespace RoboCompCamera
{

typedef ::IceInternal::Handle< ::RoboCompCamera::Camera> CameraPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::RoboCompCamera::Camera> CameraPrx;

void __read(::IceInternal::BasicStream*, CameraPrx&);
void __patch__CameraPtr(void*, ::Ice::ObjectPtr&);

}

namespace RoboCompCamera
{

class HardwareFailedException : public ::Ice::UserException
{
public:

    HardwareFailedException() {}
    explicit HardwareFailedException(const ::std::string&);
    virtual ~HardwareFailedException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string what;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

static HardwareFailedException __HardwareFailedException_init;

class MovingImageException : public ::Ice::UserException
{
public:

    MovingImageException() {}
    explicit MovingImageException(const ::std::string&);
    virtual ~MovingImageException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string what;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

typedef ::std::vector< ::Ice::Byte> imgType;

typedef ::std::vector< ::Ice::Int> intVector;

struct TCamParams
{
    ::std::string name;
    ::std::string driver;
    ::std::string device;
    ::std::string mode;
    ::Ice::Int focal;
    ::Ice::Int width;
    ::Ice::Int height;
    ::Ice::Int size;
    ::Ice::Int numCams;
    ::Ice::Int FPS;
    ::Ice::Int timerPeriod;
    ::Ice::Int leftCamera;
    ::Ice::Int rightCamera;
    ::Ice::Int bothCameras;
    ::Ice::Int inverted;
    ::Ice::Int rotated;
    ::Ice::Int leftInverted;
    ::Ice::Int rightInverted;
    ::Ice::Int saturation;
    ::Ice::Int lineFreq;
    bool talkToBase;
    bool talkToJointMotor;

    bool operator==(const TCamParams&) const;
    bool operator<(const TCamParams&) const;
    bool operator!=(const TCamParams& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const TCamParams& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const TCamParams& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const TCamParams& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace IceProxy
{

namespace RoboCompCamera
{

class Camera : virtual public ::IceProxy::Ice::Object
{
public:

    void getYUVImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState)
    {
        getYUVImage(cam, roi, hState, bState, 0);
    }
    void getYUVImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState, const ::Ice::Context& __ctx)
    {
        getYUVImage(cam, roi, hState, bState, &__ctx);
    }
    
private:

    void getYUVImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);
    
public:

    void getYImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState)
    {
        getYImage(cam, roi, hState, bState, 0);
    }
    void getYImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState, const ::Ice::Context& __ctx)
    {
        getYImage(cam, roi, hState, bState, &__ctx);
    }
    
private:

    void getYImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);
    
public:

    void getYLogPolarImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState)
    {
        getYLogPolarImage(cam, roi, hState, bState, 0);
    }
    void getYLogPolarImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState, const ::Ice::Context& __ctx)
    {
        getYLogPolarImage(cam, roi, hState, bState, &__ctx);
    }
    
private:

    void getYLogPolarImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);
    
public:

    void getYImageCR(::Ice::Int cam, ::Ice::Int div, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState)
    {
        getYImageCR(cam, div, roi, hState, bState, 0);
    }
    void getYImageCR(::Ice::Int cam, ::Ice::Int div, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState, const ::Ice::Context& __ctx)
    {
        getYImageCR(cam, div, roi, hState, bState, &__ctx);
    }
    
private:

    void getYImageCR(::Ice::Int, ::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);
    
public:

    void getRGBPackedImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState)
    {
        getRGBPackedImage(cam, roi, hState, bState, 0);
    }
    void getRGBPackedImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState, const ::Ice::Context& __ctx)
    {
        getRGBPackedImage(cam, roi, hState, bState, &__ctx);
    }
    
private:

    void getRGBPackedImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);
    
public:

    void getYRGBImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState)
    {
        getYRGBImage(cam, roi, hState, bState, 0);
    }
    void getYRGBImage(::Ice::Int cam, ::RoboCompCamera::imgType& roi, ::RoboCompCommonHead::THeadState& hState, ::RoboCompDifferentialRobot::TBaseState& bState, const ::Ice::Context& __ctx)
    {
        getYRGBImage(cam, roi, hState, bState, &__ctx);
    }
    
private:

    void getYRGBImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);
    
public:

    ::RoboCompCamera::TCamParams getCamParams()
    {
        return getCamParams(0);
    }
    ::RoboCompCamera::TCamParams getCamParams(const ::Ice::Context& __ctx)
    {
        return getCamParams(&__ctx);
    }
    
private:

    ::RoboCompCamera::TCamParams getCamParams(const ::Ice::Context*);
    
public:

    void setInnerImage(const ::RoboCompCamera::imgType& roi)
    {
        setInnerImage(roi, 0);
    }
    void setInnerImage(const ::RoboCompCamera::imgType& roi, const ::Ice::Context& __ctx)
    {
        setInnerImage(roi, &__ctx);
    }
    
private:

    void setInnerImage(const ::RoboCompCamera::imgType&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Camera> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Camera> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Camera*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Camera*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace RoboCompCamera
{

class Camera : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void getYUVImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*) = 0;

    virtual void getYImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*) = 0;

    virtual void getYLogPolarImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*) = 0;

    virtual void getYImageCR(::Ice::Int, ::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*) = 0;

    virtual void getRGBPackedImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*) = 0;

    virtual void getYRGBImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*) = 0;

    virtual ::RoboCompCamera::TCamParams getCamParams(const ::Ice::Context*) = 0;

    virtual void setInnerImage(const ::RoboCompCamera::imgType&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace RoboCompCamera
{

class Camera : virtual public ::IceDelegate::RoboCompCamera::Camera,
               virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void getYUVImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getYImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getYLogPolarImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getYImageCR(::Ice::Int, ::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getRGBPackedImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getYRGBImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual ::RoboCompCamera::TCamParams getCamParams(const ::Ice::Context*);

    virtual void setInnerImage(const ::RoboCompCamera::imgType&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace RoboCompCamera
{

class Camera : virtual public ::IceDelegate::RoboCompCamera::Camera,
               virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void getYUVImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getYImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getYLogPolarImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getYImageCR(::Ice::Int, ::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getRGBPackedImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual void getYRGBImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);

    virtual ::RoboCompCamera::TCamParams getCamParams(const ::Ice::Context*);

    virtual void setInnerImage(const ::RoboCompCamera::imgType&, const ::Ice::Context*);
};

}

}

namespace RoboCompCamera
{

class Camera : virtual public ::Ice::Object
{
public:

    typedef CameraPrx ProxyType;
    typedef CameraPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void getYUVImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getYUVImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getYImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getYImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getYLogPolarImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getYLogPolarImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getYImageCR(::Ice::Int, ::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getYImageCR(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRGBPackedImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRGBPackedImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getYRGBImage(::Ice::Int, ::RoboCompCamera::imgType&, ::RoboCompCommonHead::THeadState&, ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getYRGBImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::RoboCompCamera::TCamParams getCamParams(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCamParams(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setInnerImage(const ::RoboCompCamera::imgType&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setInnerImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

#endif
