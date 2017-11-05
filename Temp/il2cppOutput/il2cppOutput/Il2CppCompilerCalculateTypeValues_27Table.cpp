﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1379970845;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t508390884;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4101682769;
// System.IntPtr[]
struct IntPtrU5BU5D_t1172512062;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t1404951226;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2014228674;
// System.ComponentModel.CultureInfoConverter
struct CultureInfoConverter_t311921935;
// System.Collections.ICollection
struct ICollection_t2461526369;
// System.ComponentModel.EventDescriptor[]
struct EventDescriptorU5BU5D_t3317606714;
// System.String[]
struct StringU5BU5D_t4060475322;
// System.Collections.IComparer
struct IComparer_t542719287;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t2894271836;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3337293892;
// System.Diagnostics.EventLog
struct EventLog_t3141643561;
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t2284633743;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2008225883;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t4155396759;
// System.ComponentModel.TypeConverter
struct TypeConverter_t96354694;
// System.Object[]
struct ObjectU5BU5D_t1202231967;
// System.Type[]
struct TypeU5BU5D_t3807733968;
// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_t439815728;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1606073231;
// System.Collections.Hashtable
struct Hashtable_t1762597163;
// System.Attribute[]
struct AttributeU5BU5D_t828753884;
// System.ComponentModel.AttributeCollection/AttributeEntry[]
struct AttributeEntryU5BU5D_t886250822;
// System.Collections.ArrayList
struct ArrayList_t825968487;
// System.Delegate
struct Delegate_t147835305;
// System.ComponentModel.EventHandlerList/ListEntry
struct ListEntry_t2616800125;
// System.ComponentModel.Component
struct Component_t474650112;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3696739850;
// System.ComponentModel.IExtenderProvider
struct IExtenderProvider_t411349141;
// System.Void
struct Void_t4233125135;
// System.Char[]
struct CharU5BU5D_t1705485309;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t503540002;
// System.ComponentModel.ISite
struct ISite_t2716256152;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1510572673;
// System.Diagnostics.TraceSwitch
struct TraceSwitch_t1514278438;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2677195358;
// System.Threading.Thread
struct Thread_t1403542357;
// System.ComponentModel.ReflectPropertyDescriptor
struct ReflectPropertyDescriptor_t589801430;
// System.DelegateData
struct DelegateData_t2547442569;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1627904660;
// System.Delegate[]
struct DelegateU5BU5D_t1919448468;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t1660666884;
// System.IAsyncResult
struct IAsyncResult_t1272001935;
// System.AsyncCallback
struct AsyncCallback_t604134079;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t1568420707;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t4217552343;

struct Exception_t3288061028_marshaled_pinvoke;
struct Exception_t3288061028_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T3288061028_H
#define EXCEPTION_T3288061028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3288061028  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t3288061028 * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t508390884 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4101682769* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t1172512062* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____innerException_4)); }
	inline Exception_t3288061028 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t3288061028 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t3288061028 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t508390884 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t508390884 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t508390884 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4101682769* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4101682769** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4101682769* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t1172512062* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t1172512062** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t1172512062* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t3288061028_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t3288061028_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t3288061028_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3288061028_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t508390884 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4101682769* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t3288061028_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3288061028_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t508390884 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4101682769* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T3288061028_H
#ifndef CUSTOMTYPEDESCRIPTOR_T2177202805_H
#define CUSTOMTYPEDESCRIPTOR_T2177202805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t2177202805  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t2177202805, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T2177202805_H
#ifndef CULTUREINFOMAPPER_T1836859149_H
#define CULTUREINFOMAPPER_T1836859149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoMapper
struct  CultureInfoMapper_t1836859149  : public RuntimeObject
{
public:

public:
};

struct CultureInfoMapper_t1836859149_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CultureInfoConverter/CultureInfoMapper::cultureInfoNameMap
	Dictionary_2_t2014228674 * ___cultureInfoNameMap_0;

public:
	inline static int32_t get_offset_of_cultureInfoNameMap_0() { return static_cast<int32_t>(offsetof(CultureInfoMapper_t1836859149_StaticFields, ___cultureInfoNameMap_0)); }
	inline Dictionary_2_t2014228674 * get_cultureInfoNameMap_0() const { return ___cultureInfoNameMap_0; }
	inline Dictionary_2_t2014228674 ** get_address_of_cultureInfoNameMap_0() { return &___cultureInfoNameMap_0; }
	inline void set_cultureInfoNameMap_0(Dictionary_2_t2014228674 * value)
	{
		___cultureInfoNameMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___cultureInfoNameMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOMAPPER_T1836859149_H
#ifndef CULTURECOMPARER_T3702718181_H
#define CULTURECOMPARER_T3702718181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureComparer
struct  CultureComparer_t3702718181  : public RuntimeObject
{
public:
	// System.ComponentModel.CultureInfoConverter System.ComponentModel.CultureInfoConverter/CultureComparer::converter
	CultureInfoConverter_t311921935 * ___converter_0;

public:
	inline static int32_t get_offset_of_converter_0() { return static_cast<int32_t>(offsetof(CultureComparer_t3702718181, ___converter_0)); }
	inline CultureInfoConverter_t311921935 * get_converter_0() const { return ___converter_0; }
	inline CultureInfoConverter_t311921935 ** get_address_of_converter_0() { return &___converter_0; }
	inline void set_converter_0(CultureInfoConverter_t311921935 * value)
	{
		___converter_0 = value;
		Il2CppCodeGenWriteBarrier((&___converter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURECOMPARER_T3702718181_H
#ifndef STANDARDVALUESCOLLECTION_T1627904660_H
#define STANDARDVALUESCOLLECTION_T1627904660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct  StandardValuesCollection_t1627904660  : public RuntimeObject
{
public:
	// System.Collections.ICollection System.ComponentModel.TypeConverter/StandardValuesCollection::values
	RuntimeObject* ___values_0;
	// System.Array System.ComponentModel.TypeConverter/StandardValuesCollection::valueArray
	RuntimeArray * ___valueArray_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t1627904660, ___values_0)); }
	inline RuntimeObject* get_values_0() const { return ___values_0; }
	inline RuntimeObject** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(RuntimeObject* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_valueArray_1() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t1627904660, ___valueArray_1)); }
	inline RuntimeArray * get_valueArray_1() const { return ___valueArray_1; }
	inline RuntimeArray ** get_address_of_valueArray_1() { return &___valueArray_1; }
	inline void set_valueArray_1(RuntimeArray * value)
	{
		___valueArray_1 = value;
		Il2CppCodeGenWriteBarrier((&___valueArray_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDVALUESCOLLECTION_T1627904660_H
#ifndef EVENTDESCRIPTORCOLLECTION_T4155396759_H
#define EVENTDESCRIPTORCOLLECTION_T4155396759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t4155396759  : public RuntimeObject
{
public:
	// System.ComponentModel.EventDescriptor[] System.ComponentModel.EventDescriptorCollection::events
	EventDescriptorU5BU5D_t3317606714* ___events_0;
	// System.String[] System.ComponentModel.EventDescriptorCollection::namedSort
	StringU5BU5D_t4060475322* ___namedSort_1;
	// System.Collections.IComparer System.ComponentModel.EventDescriptorCollection::comparer
	RuntimeObject* ___comparer_2;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::eventsOwned
	bool ___eventsOwned_3;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::needSort
	bool ___needSort_4;
	// System.Int32 System.ComponentModel.EventDescriptorCollection::eventCount
	int32_t ___eventCount_5;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::readOnly
	bool ___readOnly_6;

public:
	inline static int32_t get_offset_of_events_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4155396759, ___events_0)); }
	inline EventDescriptorU5BU5D_t3317606714* get_events_0() const { return ___events_0; }
	inline EventDescriptorU5BU5D_t3317606714** get_address_of_events_0() { return &___events_0; }
	inline void set_events_0(EventDescriptorU5BU5D_t3317606714* value)
	{
		___events_0 = value;
		Il2CppCodeGenWriteBarrier((&___events_0), value);
	}

	inline static int32_t get_offset_of_namedSort_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4155396759, ___namedSort_1)); }
	inline StringU5BU5D_t4060475322* get_namedSort_1() const { return ___namedSort_1; }
	inline StringU5BU5D_t4060475322** get_address_of_namedSort_1() { return &___namedSort_1; }
	inline void set_namedSort_1(StringU5BU5D_t4060475322* value)
	{
		___namedSort_1 = value;
		Il2CppCodeGenWriteBarrier((&___namedSort_1), value);
	}

	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4155396759, ___comparer_2)); }
	inline RuntimeObject* get_comparer_2() const { return ___comparer_2; }
	inline RuntimeObject** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(RuntimeObject* value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}

	inline static int32_t get_offset_of_eventsOwned_3() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4155396759, ___eventsOwned_3)); }
	inline bool get_eventsOwned_3() const { return ___eventsOwned_3; }
	inline bool* get_address_of_eventsOwned_3() { return &___eventsOwned_3; }
	inline void set_eventsOwned_3(bool value)
	{
		___eventsOwned_3 = value;
	}

	inline static int32_t get_offset_of_needSort_4() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4155396759, ___needSort_4)); }
	inline bool get_needSort_4() const { return ___needSort_4; }
	inline bool* get_address_of_needSort_4() { return &___needSort_4; }
	inline void set_needSort_4(bool value)
	{
		___needSort_4 = value;
	}

	inline static int32_t get_offset_of_eventCount_5() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4155396759, ___eventCount_5)); }
	inline int32_t get_eventCount_5() const { return ___eventCount_5; }
	inline int32_t* get_address_of_eventCount_5() { return &___eventCount_5; }
	inline void set_eventCount_5(int32_t value)
	{
		___eventCount_5 = value;
	}

	inline static int32_t get_offset_of_readOnly_6() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4155396759, ___readOnly_6)); }
	inline bool get_readOnly_6() const { return ___readOnly_6; }
	inline bool* get_address_of_readOnly_6() { return &___readOnly_6; }
	inline void set_readOnly_6(bool value)
	{
		___readOnly_6 = value;
	}
};

struct EventDescriptorCollection_t4155396759_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t4155396759 * ___Empty_7;

public:
	inline static int32_t get_offset_of_Empty_7() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t4155396759_StaticFields, ___Empty_7)); }
	inline EventDescriptorCollection_t4155396759 * get_Empty_7() const { return ___Empty_7; }
	inline EventDescriptorCollection_t4155396759 ** get_address_of_Empty_7() { return &___Empty_7; }
	inline void set_Empty_7(EventDescriptorCollection_t4155396759 * value)
	{
		___Empty_7 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T4155396759_H
#ifndef TYPEDESCRIPTIONPROVIDER_T2136278850_H
#define TYPEDESCRIPTIONPROVIDER_T2136278850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t2136278850  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t2136278850 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t2894271836 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t2136278850, ____parent_0)); }
	inline TypeDescriptionProvider_t2136278850 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t2136278850 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t2136278850 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t2136278850, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t2894271836 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t2894271836 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t2894271836 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&____emptyDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T2136278850_H
#ifndef PROPERTYDESCRIPTORENUMERATOR_T4012622696_H
#define PROPERTYDESCRIPTORENUMERATOR_T4012622696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator
struct  PropertyDescriptorEnumerator_t4012622696  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::owner
	PropertyDescriptorCollection_t3337293892 * ___owner_0;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorEnumerator_t4012622696, ___owner_0)); }
	inline PropertyDescriptorCollection_t3337293892 * get_owner_0() const { return ___owner_0; }
	inline PropertyDescriptorCollection_t3337293892 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(PropertyDescriptorCollection_t3337293892 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((&___owner_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorEnumerator_t4012622696, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORENUMERATOR_T4012622696_H
#ifndef EVENTLOGIMPL_T710273496_H
#define EVENTLOGIMPL_T710273496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogImpl
struct  EventLogImpl_t710273496  : public RuntimeObject
{
public:
	// System.Diagnostics.EventLog System.Diagnostics.EventLogImpl::_coreEventLog
	EventLog_t3141643561 * ____coreEventLog_0;

public:
	inline static int32_t get_offset_of__coreEventLog_0() { return static_cast<int32_t>(offsetof(EventLogImpl_t710273496, ____coreEventLog_0)); }
	inline EventLog_t3141643561 * get__coreEventLog_0() const { return ____coreEventLog_0; }
	inline EventLog_t3141643561 ** get_address_of__coreEventLog_0() { return &____coreEventLog_0; }
	inline void set__coreEventLog_0(EventLog_t3141643561 * value)
	{
		____coreEventLog_0 = value;
		Il2CppCodeGenWriteBarrier((&____coreEventLog_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGIMPL_T710273496_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T3337293892_H
#define PROPERTYDESCRIPTORCOLLECTION_T3337293892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t3337293892  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.ComponentModel.PropertyDescriptorCollection::cachedFoundProperties
	RuntimeObject* ___cachedFoundProperties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::cachedIgnoreCase
	bool ___cachedIgnoreCase_2;
	// System.ComponentModel.PropertyDescriptor[] System.ComponentModel.PropertyDescriptorCollection::properties
	PropertyDescriptorU5BU5D_t2284633743* ___properties_3;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection::propCount
	int32_t ___propCount_4;
	// System.String[] System.ComponentModel.PropertyDescriptorCollection::namedSort
	StringU5BU5D_t4060475322* ___namedSort_5;
	// System.Collections.IComparer System.ComponentModel.PropertyDescriptorCollection::comparer
	RuntimeObject* ___comparer_6;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::propsOwned
	bool ___propsOwned_7;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::needSort
	bool ___needSort_8;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_9;

public:
	inline static int32_t get_offset_of_cachedFoundProperties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892, ___cachedFoundProperties_1)); }
	inline RuntimeObject* get_cachedFoundProperties_1() const { return ___cachedFoundProperties_1; }
	inline RuntimeObject** get_address_of_cachedFoundProperties_1() { return &___cachedFoundProperties_1; }
	inline void set_cachedFoundProperties_1(RuntimeObject* value)
	{
		___cachedFoundProperties_1 = value;
		Il2CppCodeGenWriteBarrier((&___cachedFoundProperties_1), value);
	}

	inline static int32_t get_offset_of_cachedIgnoreCase_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892, ___cachedIgnoreCase_2)); }
	inline bool get_cachedIgnoreCase_2() const { return ___cachedIgnoreCase_2; }
	inline bool* get_address_of_cachedIgnoreCase_2() { return &___cachedIgnoreCase_2; }
	inline void set_cachedIgnoreCase_2(bool value)
	{
		___cachedIgnoreCase_2 = value;
	}

	inline static int32_t get_offset_of_properties_3() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892, ___properties_3)); }
	inline PropertyDescriptorU5BU5D_t2284633743* get_properties_3() const { return ___properties_3; }
	inline PropertyDescriptorU5BU5D_t2284633743** get_address_of_properties_3() { return &___properties_3; }
	inline void set_properties_3(PropertyDescriptorU5BU5D_t2284633743* value)
	{
		___properties_3 = value;
		Il2CppCodeGenWriteBarrier((&___properties_3), value);
	}

	inline static int32_t get_offset_of_propCount_4() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892, ___propCount_4)); }
	inline int32_t get_propCount_4() const { return ___propCount_4; }
	inline int32_t* get_address_of_propCount_4() { return &___propCount_4; }
	inline void set_propCount_4(int32_t value)
	{
		___propCount_4 = value;
	}

	inline static int32_t get_offset_of_namedSort_5() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892, ___namedSort_5)); }
	inline StringU5BU5D_t4060475322* get_namedSort_5() const { return ___namedSort_5; }
	inline StringU5BU5D_t4060475322** get_address_of_namedSort_5() { return &___namedSort_5; }
	inline void set_namedSort_5(StringU5BU5D_t4060475322* value)
	{
		___namedSort_5 = value;
		Il2CppCodeGenWriteBarrier((&___namedSort_5), value);
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_propsOwned_7() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892, ___propsOwned_7)); }
	inline bool get_propsOwned_7() const { return ___propsOwned_7; }
	inline bool* get_address_of_propsOwned_7() { return &___propsOwned_7; }
	inline void set_propsOwned_7(bool value)
	{
		___propsOwned_7 = value;
	}

	inline static int32_t get_offset_of_needSort_8() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892, ___needSort_8)); }
	inline bool get_needSort_8() const { return ___needSort_8; }
	inline bool* get_address_of_needSort_8() { return &___needSort_8; }
	inline void set_needSort_8(bool value)
	{
		___needSort_8 = value;
	}

	inline static int32_t get_offset_of_readOnly_9() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892, ___readOnly_9)); }
	inline bool get_readOnly_9() const { return ___readOnly_9; }
	inline bool* get_address_of_readOnly_9() { return &___readOnly_9; }
	inline void set_readOnly_9(bool value)
	{
		___readOnly_9 = value;
	}
};

struct PropertyDescriptorCollection_t3337293892_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t3337293892 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3337293892_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t3337293892 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t3337293892 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t3337293892 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T3337293892_H
#ifndef REFLECTEDTYPEDATA_T4057409611_H
#define REFLECTEDTYPEDATA_T4057409611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData
struct  ReflectedTypeData_t4057409611  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_type
	Type_t * ____type_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_attributes
	AttributeCollection_t2008225883 * ____attributes_1;
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_events
	EventDescriptorCollection_t4155396759 * ____events_2;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_properties
	PropertyDescriptorCollection_t3337293892 * ____properties_3;
	// System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_converter
	TypeConverter_t96354694 * ____converter_4;
	// System.Object[] System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editors
	ObjectU5BU5D_t1202231967* ____editors_5;
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editorTypes
	TypeU5BU5D_t3807733968* ____editorTypes_6;
	// System.Int32 System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editorCount
	int32_t ____editorCount_7;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t4057409611, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t4057409611, ____attributes_1)); }
	inline AttributeCollection_t2008225883 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t2008225883 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t2008225883 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}

	inline static int32_t get_offset_of__events_2() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t4057409611, ____events_2)); }
	inline EventDescriptorCollection_t4155396759 * get__events_2() const { return ____events_2; }
	inline EventDescriptorCollection_t4155396759 ** get_address_of__events_2() { return &____events_2; }
	inline void set__events_2(EventDescriptorCollection_t4155396759 * value)
	{
		____events_2 = value;
		Il2CppCodeGenWriteBarrier((&____events_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t4057409611, ____properties_3)); }
	inline PropertyDescriptorCollection_t3337293892 * get__properties_3() const { return ____properties_3; }
	inline PropertyDescriptorCollection_t3337293892 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyDescriptorCollection_t3337293892 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__converter_4() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t4057409611, ____converter_4)); }
	inline TypeConverter_t96354694 * get__converter_4() const { return ____converter_4; }
	inline TypeConverter_t96354694 ** get_address_of__converter_4() { return &____converter_4; }
	inline void set__converter_4(TypeConverter_t96354694 * value)
	{
		____converter_4 = value;
		Il2CppCodeGenWriteBarrier((&____converter_4), value);
	}

	inline static int32_t get_offset_of__editors_5() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t4057409611, ____editors_5)); }
	inline ObjectU5BU5D_t1202231967* get__editors_5() const { return ____editors_5; }
	inline ObjectU5BU5D_t1202231967** get_address_of__editors_5() { return &____editors_5; }
	inline void set__editors_5(ObjectU5BU5D_t1202231967* value)
	{
		____editors_5 = value;
		Il2CppCodeGenWriteBarrier((&____editors_5), value);
	}

	inline static int32_t get_offset_of__editorTypes_6() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t4057409611, ____editorTypes_6)); }
	inline TypeU5BU5D_t3807733968* get__editorTypes_6() const { return ____editorTypes_6; }
	inline TypeU5BU5D_t3807733968** get_address_of__editorTypes_6() { return &____editorTypes_6; }
	inline void set__editorTypes_6(TypeU5BU5D_t3807733968* value)
	{
		____editorTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&____editorTypes_6), value);
	}

	inline static int32_t get_offset_of__editorCount_7() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t4057409611, ____editorCount_7)); }
	inline int32_t get__editorCount_7() const { return ____editorCount_7; }
	inline int32_t* get_address_of__editorCount_7() { return &____editorCount_7; }
	inline void set__editorCount_7(int32_t value)
	{
		____editorCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTEDTYPEDATA_T4057409611_H
#ifndef ATTRIBUTE_T1602879233_H
#define ATTRIBUTE_T1602879233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1602879233  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1602879233_H
#ifndef REFERENCECOMPARER_T36452528_H
#define REFERENCECOMPARER_T36452528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter/ReferenceComparer
struct  ReferenceComparer_t36452528  : public RuntimeObject
{
public:
	// System.ComponentModel.ReferenceConverter System.ComponentModel.ReferenceConverter/ReferenceComparer::converter
	ReferenceConverter_t439815728 * ___converter_0;

public:
	inline static int32_t get_offset_of_converter_0() { return static_cast<int32_t>(offsetof(ReferenceComparer_t36452528, ___converter_0)); }
	inline ReferenceConverter_t439815728 * get_converter_0() const { return ___converter_0; }
	inline ReferenceConverter_t439815728 ** get_address_of_converter_0() { return &___converter_0; }
	inline void set_converter_0(ReferenceConverter_t439815728 * value)
	{
		___converter_0 = value;
		Il2CppCodeGenWriteBarrier((&___converter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECOMPARER_T36452528_H
#ifndef MARSHALBYREFOBJECT_T2617547684_H
#define MARSHALBYREFOBJECT_T2617547684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2617547684  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1606073231 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2617547684, ____identity_0)); }
	inline ServerIdentity_t1606073231 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1606073231 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1606073231 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2617547684_marshaled_pinvoke
{
	ServerIdentity_t1606073231 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2617547684_marshaled_com
{
	ServerIdentity_t1606073231 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2617547684_H
#ifndef ATTRIBUTECOLLECTION_T2008225883_H
#define ATTRIBUTECOLLECTION_T2008225883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t2008225883  : public RuntimeObject
{
public:
	// System.Attribute[] System.ComponentModel.AttributeCollection::_attributes
	AttributeU5BU5D_t828753884* ____attributes_2;
	// System.ComponentModel.AttributeCollection/AttributeEntry[] System.ComponentModel.AttributeCollection::_foundAttributeTypes
	AttributeEntryU5BU5D_t886250822* ____foundAttributeTypes_4;
	// System.Int32 System.ComponentModel.AttributeCollection::_index
	int32_t ____index_5;

public:
	inline static int32_t get_offset_of__attributes_2() { return static_cast<int32_t>(offsetof(AttributeCollection_t2008225883, ____attributes_2)); }
	inline AttributeU5BU5D_t828753884* get__attributes_2() const { return ____attributes_2; }
	inline AttributeU5BU5D_t828753884** get_address_of__attributes_2() { return &____attributes_2; }
	inline void set__attributes_2(AttributeU5BU5D_t828753884* value)
	{
		____attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_2), value);
	}

	inline static int32_t get_offset_of__foundAttributeTypes_4() { return static_cast<int32_t>(offsetof(AttributeCollection_t2008225883, ____foundAttributeTypes_4)); }
	inline AttributeEntryU5BU5D_t886250822* get__foundAttributeTypes_4() const { return ____foundAttributeTypes_4; }
	inline AttributeEntryU5BU5D_t886250822** get_address_of__foundAttributeTypes_4() { return &____foundAttributeTypes_4; }
	inline void set__foundAttributeTypes_4(AttributeEntryU5BU5D_t886250822* value)
	{
		____foundAttributeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&____foundAttributeTypes_4), value);
	}

	inline static int32_t get_offset_of__index_5() { return static_cast<int32_t>(offsetof(AttributeCollection_t2008225883, ____index_5)); }
	inline int32_t get__index_5() const { return ____index_5; }
	inline int32_t* get_address_of__index_5() { return &____index_5; }
	inline void set__index_5(int32_t value)
	{
		____index_5 = value;
	}
};

struct AttributeCollection_t2008225883_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t2008225883 * ___Empty_0;
	// System.Collections.Hashtable System.ComponentModel.AttributeCollection::_defaultAttributes
	Hashtable_t1762597163 * ____defaultAttributes_1;
	// System.Object System.ComponentModel.AttributeCollection::internalSyncObject
	RuntimeObject * ___internalSyncObject_3;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t2008225883_StaticFields, ___Empty_0)); }
	inline AttributeCollection_t2008225883 * get_Empty_0() const { return ___Empty_0; }
	inline AttributeCollection_t2008225883 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(AttributeCollection_t2008225883 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}

	inline static int32_t get_offset_of__defaultAttributes_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t2008225883_StaticFields, ____defaultAttributes_1)); }
	inline Hashtable_t1762597163 * get__defaultAttributes_1() const { return ____defaultAttributes_1; }
	inline Hashtable_t1762597163 ** get_address_of__defaultAttributes_1() { return &____defaultAttributes_1; }
	inline void set__defaultAttributes_1(Hashtable_t1762597163 * value)
	{
		____defaultAttributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultAttributes_1), value);
	}

	inline static int32_t get_offset_of_internalSyncObject_3() { return static_cast<int32_t>(offsetof(AttributeCollection_t2008225883_StaticFields, ___internalSyncObject_3)); }
	inline RuntimeObject * get_internalSyncObject_3() const { return ___internalSyncObject_3; }
	inline RuntimeObject ** get_address_of_internalSyncObject_3() { return &___internalSyncObject_3; }
	inline void set_internalSyncObject_3(RuntimeObject * value)
	{
		___internalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T2008225883_H
#ifndef ARRAYSUBSETENUMERATOR_T651831097_H
#define ARRAYSUBSETENUMERATOR_T651831097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArraySubsetEnumerator
struct  ArraySubsetEnumerator_t651831097  : public RuntimeObject
{
public:
	// System.Array System.ComponentModel.ArraySubsetEnumerator::array
	RuntimeArray * ___array_0;
	// System.Int32 System.ComponentModel.ArraySubsetEnumerator::total
	int32_t ___total_1;
	// System.Int32 System.ComponentModel.ArraySubsetEnumerator::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t651831097, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}

	inline static int32_t get_offset_of_total_1() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t651831097, ___total_1)); }
	inline int32_t get_total_1() const { return ___total_1; }
	inline int32_t* get_address_of_total_1() { return &___total_1; }
	inline void set_total_1(int32_t value)
	{
		___total_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t651831097, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSUBSETENUMERATOR_T651831097_H
#ifndef READONLYCOLLECTIONBASE_T2343526797_H
#define READONLYCOLLECTIONBASE_T2343526797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t2343526797  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t825968487 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t2343526797, ___list_0)); }
	inline ArrayList_t825968487 * get_list_0() const { return ___list_0; }
	inline ArrayList_t825968487 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t825968487 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T2343526797_H
#ifndef EVENTARGS_T3429579474_H
#define EVENTARGS_T3429579474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3429579474  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3429579474_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3429579474 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3429579474_StaticFields, ___Empty_0)); }
	inline EventArgs_t3429579474 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3429579474 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3429579474 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3429579474_H
#ifndef MEMBERDESCRIPTOR_T3541007810_H
#define MEMBERDESCRIPTOR_T3541007810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3541007810  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.String System.ComponentModel.MemberDescriptor::displayName
	String_t* ___displayName_1;
	// System.Int32 System.ComponentModel.MemberDescriptor::nameHash
	int32_t ___nameHash_2;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attributeCollection
	AttributeCollection_t2008225883 * ___attributeCollection_3;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t828753884* ___attributes_4;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t828753884* ___originalAttributes_5;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_6;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_7;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_8;
	// System.String System.ComponentModel.MemberDescriptor::category
	String_t* ___category_9;
	// System.String System.ComponentModel.MemberDescriptor::description
	String_t* ___description_10;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject * ___lockCookie_11;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_1), value);
	}

	inline static int32_t get_offset_of_nameHash_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___nameHash_2)); }
	inline int32_t get_nameHash_2() const { return ___nameHash_2; }
	inline int32_t* get_address_of_nameHash_2() { return &___nameHash_2; }
	inline void set_nameHash_2(int32_t value)
	{
		___nameHash_2 = value;
	}

	inline static int32_t get_offset_of_attributeCollection_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___attributeCollection_3)); }
	inline AttributeCollection_t2008225883 * get_attributeCollection_3() const { return ___attributeCollection_3; }
	inline AttributeCollection_t2008225883 ** get_address_of_attributeCollection_3() { return &___attributeCollection_3; }
	inline void set_attributeCollection_3(AttributeCollection_t2008225883 * value)
	{
		___attributeCollection_3 = value;
		Il2CppCodeGenWriteBarrier((&___attributeCollection_3), value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___attributes_4)); }
	inline AttributeU5BU5D_t828753884* get_attributes_4() const { return ___attributes_4; }
	inline AttributeU5BU5D_t828753884** get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(AttributeU5BU5D_t828753884* value)
	{
		___attributes_4 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_4), value);
	}

	inline static int32_t get_offset_of_originalAttributes_5() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___originalAttributes_5)); }
	inline AttributeU5BU5D_t828753884* get_originalAttributes_5() const { return ___originalAttributes_5; }
	inline AttributeU5BU5D_t828753884** get_address_of_originalAttributes_5() { return &___originalAttributes_5; }
	inline void set_originalAttributes_5(AttributeU5BU5D_t828753884* value)
	{
		___originalAttributes_5 = value;
		Il2CppCodeGenWriteBarrier((&___originalAttributes_5), value);
	}

	inline static int32_t get_offset_of_attributesFiltered_6() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___attributesFiltered_6)); }
	inline bool get_attributesFiltered_6() const { return ___attributesFiltered_6; }
	inline bool* get_address_of_attributesFiltered_6() { return &___attributesFiltered_6; }
	inline void set_attributesFiltered_6(bool value)
	{
		___attributesFiltered_6 = value;
	}

	inline static int32_t get_offset_of_attributesFilled_7() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___attributesFilled_7)); }
	inline bool get_attributesFilled_7() const { return ___attributesFilled_7; }
	inline bool* get_address_of_attributesFilled_7() { return &___attributesFilled_7; }
	inline void set_attributesFilled_7(bool value)
	{
		___attributesFilled_7 = value;
	}

	inline static int32_t get_offset_of_metadataVersion_8() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___metadataVersion_8)); }
	inline int32_t get_metadataVersion_8() const { return ___metadataVersion_8; }
	inline int32_t* get_address_of_metadataVersion_8() { return &___metadataVersion_8; }
	inline void set_metadataVersion_8(int32_t value)
	{
		___metadataVersion_8 = value;
	}

	inline static int32_t get_offset_of_category_9() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___category_9)); }
	inline String_t* get_category_9() const { return ___category_9; }
	inline String_t** get_address_of_category_9() { return &___category_9; }
	inline void set_category_9(String_t* value)
	{
		___category_9 = value;
		Il2CppCodeGenWriteBarrier((&___category_9), value);
	}

	inline static int32_t get_offset_of_description_10() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___description_10)); }
	inline String_t* get_description_10() const { return ___description_10; }
	inline String_t** get_address_of_description_10() { return &___description_10; }
	inline void set_description_10(String_t* value)
	{
		___description_10 = value;
		Il2CppCodeGenWriteBarrier((&___description_10), value);
	}

	inline static int32_t get_offset_of_lockCookie_11() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3541007810, ___lockCookie_11)); }
	inline RuntimeObject * get_lockCookie_11() const { return ___lockCookie_11; }
	inline RuntimeObject ** get_address_of_lockCookie_11() { return &___lockCookie_11; }
	inline void set_lockCookie_11(RuntimeObject * value)
	{
		___lockCookie_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockCookie_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3541007810_H
#ifndef LISTENTRY_T2616800125_H
#define LISTENTRY_T2616800125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList/ListEntry
struct  ListEntry_t2616800125  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList/ListEntry::next
	ListEntry_t2616800125 * ___next_0;
	// System.Object System.ComponentModel.EventHandlerList/ListEntry::key
	RuntimeObject * ___key_1;
	// System.Delegate System.ComponentModel.EventHandlerList/ListEntry::handler
	Delegate_t147835305 * ___handler_2;

public:
	inline static int32_t get_offset_of_next_0() { return static_cast<int32_t>(offsetof(ListEntry_t2616800125, ___next_0)); }
	inline ListEntry_t2616800125 * get_next_0() const { return ___next_0; }
	inline ListEntry_t2616800125 ** get_address_of_next_0() { return &___next_0; }
	inline void set_next_0(ListEntry_t2616800125 * value)
	{
		___next_0 = value;
		Il2CppCodeGenWriteBarrier((&___next_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(ListEntry_t2616800125, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_handler_2() { return static_cast<int32_t>(offsetof(ListEntry_t2616800125, ___handler_2)); }
	inline Delegate_t147835305 * get_handler_2() const { return ___handler_2; }
	inline Delegate_t147835305 ** get_address_of_handler_2() { return &___handler_2; }
	inline void set_handler_2(Delegate_t147835305 * value)
	{
		___handler_2 = value;
		Il2CppCodeGenWriteBarrier((&___handler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T2616800125_H
#ifndef EVENTHANDLERLIST_T1510572673_H
#define EVENTHANDLERLIST_T1510572673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1510572673  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::head
	ListEntry_t2616800125 * ___head_0;
	// System.ComponentModel.Component System.ComponentModel.EventHandlerList::parent
	Component_t474650112 * ___parent_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1510572673, ___head_0)); }
	inline ListEntry_t2616800125 * get_head_0() const { return ___head_0; }
	inline ListEntry_t2616800125 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(ListEntry_t2616800125 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1510572673, ___parent_1)); }
	inline Component_t474650112 * get_parent_1() const { return ___parent_1; }
	inline Component_t474650112 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Component_t474650112 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((&___parent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T1510572673_H
#ifndef PINVOKE_T1109261675_H
#define PINVOKE_T1109261675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Win32EventLog/PInvoke
struct  PInvoke_t1109261675  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINVOKE_T1109261675_H
#ifndef VALUETYPE_T1706913817_H
#define VALUETYPE_T1706913817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1706913817  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1706913817_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1706913817_marshaled_com
{
};
#endif // VALUETYPE_T1706913817_H
#ifndef PROPERTYCHANGEDEVENTARGS_T4217552343_H
#define PROPERTYCHANGEDEVENTARGS_T4217552343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t4217552343  : public EventArgs_t3429579474
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t4217552343, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T4217552343_H
#ifndef EXTENDERPROVIDEDPROPERTYATTRIBUTE_T947380105_H
#define EXTENDERPROVIDEDPROPERTYATTRIBUTE_T947380105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExtenderProvidedPropertyAttribute
struct  ExtenderProvidedPropertyAttribute_t947380105  : public Attribute_t1602879233
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ExtenderProvidedPropertyAttribute::extenderProperty
	PropertyDescriptor_t3696739850 * ___extenderProperty_0;
	// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::provider
	RuntimeObject* ___provider_1;
	// System.Type System.ComponentModel.ExtenderProvidedPropertyAttribute::receiverType
	Type_t * ___receiverType_2;

public:
	inline static int32_t get_offset_of_extenderProperty_0() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t947380105, ___extenderProperty_0)); }
	inline PropertyDescriptor_t3696739850 * get_extenderProperty_0() const { return ___extenderProperty_0; }
	inline PropertyDescriptor_t3696739850 ** get_address_of_extenderProperty_0() { return &___extenderProperty_0; }
	inline void set_extenderProperty_0(PropertyDescriptor_t3696739850 * value)
	{
		___extenderProperty_0 = value;
		Il2CppCodeGenWriteBarrier((&___extenderProperty_0), value);
	}

	inline static int32_t get_offset_of_provider_1() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t947380105, ___provider_1)); }
	inline RuntimeObject* get_provider_1() const { return ___provider_1; }
	inline RuntimeObject** get_address_of_provider_1() { return &___provider_1; }
	inline void set_provider_1(RuntimeObject* value)
	{
		___provider_1 = value;
		Il2CppCodeGenWriteBarrier((&___provider_1), value);
	}

	inline static int32_t get_offset_of_receiverType_2() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t947380105, ___receiverType_2)); }
	inline Type_t * get_receiverType_2() const { return ___receiverType_2; }
	inline Type_t ** get_address_of_receiverType_2() { return &___receiverType_2; }
	inline void set_receiverType_2(Type_t * value)
	{
		___receiverType_2 = value;
		Il2CppCodeGenWriteBarrier((&___receiverType_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDERPROVIDEDPROPERTYATTRIBUTE_T947380105_H
#ifndef PROVIDEPROPERTYATTRIBUTE_T2339437776_H
#define PROVIDEPROPERTYATTRIBUTE_T2339437776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ProvidePropertyAttribute
struct  ProvidePropertyAttribute_t2339437776  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.ProvidePropertyAttribute::propertyName
	String_t* ___propertyName_0;
	// System.String System.ComponentModel.ProvidePropertyAttribute::receiverTypeName
	String_t* ___receiverTypeName_1;

public:
	inline static int32_t get_offset_of_propertyName_0() { return static_cast<int32_t>(offsetof(ProvidePropertyAttribute_t2339437776, ___propertyName_0)); }
	inline String_t* get_propertyName_0() const { return ___propertyName_0; }
	inline String_t** get_address_of_propertyName_0() { return &___propertyName_0; }
	inline void set_propertyName_0(String_t* value)
	{
		___propertyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_0), value);
	}

	inline static int32_t get_offset_of_receiverTypeName_1() { return static_cast<int32_t>(offsetof(ProvidePropertyAttribute_t2339437776, ___receiverTypeName_1)); }
	inline String_t* get_receiverTypeName_1() const { return ___receiverTypeName_1; }
	inline String_t** get_address_of_receiverTypeName_1() { return &___receiverTypeName_1; }
	inline void set_receiverTypeName_1(String_t* value)
	{
		___receiverTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___receiverTypeName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDEPROPERTYATTRIBUTE_T2339437776_H
#ifndef READONLYATTRIBUTE_T3240484922_H
#define READONLYATTRIBUTE_T3240484922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t3240484922  : public Attribute_t1602879233
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::isReadOnly
	bool ___isReadOnly_0;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t3240484922, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}
};

struct ReadOnlyAttribute_t3240484922_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t3240484922 * ___Yes_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t3240484922 * ___No_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t3240484922 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t3240484922_StaticFields, ___Yes_1)); }
	inline ReadOnlyAttribute_t3240484922 * get_Yes_1() const { return ___Yes_1; }
	inline ReadOnlyAttribute_t3240484922 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(ReadOnlyAttribute_t3240484922 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t3240484922_StaticFields, ___No_2)); }
	inline ReadOnlyAttribute_t3240484922 * get_No_2() const { return ___No_2; }
	inline ReadOnlyAttribute_t3240484922 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ReadOnlyAttribute_t3240484922 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t3240484922_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t3240484922 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t3240484922 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t3240484922 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T3240484922_H
#ifndef PROPERTYDESCRIPTOR_T3696739850_H
#define PROPERTYDESCRIPTOR_T3696739850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3696739850  : public MemberDescriptor_t3541007810
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t96354694 * ___converter_12;
	// System.Object[] System.ComponentModel.PropertyDescriptor::editors
	ObjectU5BU5D_t1202231967* ___editors_13;
	// System.Type[] System.ComponentModel.PropertyDescriptor::editorTypes
	TypeU5BU5D_t3807733968* ___editorTypes_14;
	// System.Int32 System.ComponentModel.PropertyDescriptor::editorCount
	int32_t ___editorCount_15;

public:
	inline static int32_t get_offset_of_converter_12() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3696739850, ___converter_12)); }
	inline TypeConverter_t96354694 * get_converter_12() const { return ___converter_12; }
	inline TypeConverter_t96354694 ** get_address_of_converter_12() { return &___converter_12; }
	inline void set_converter_12(TypeConverter_t96354694 * value)
	{
		___converter_12 = value;
		Il2CppCodeGenWriteBarrier((&___converter_12), value);
	}

	inline static int32_t get_offset_of_editors_13() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3696739850, ___editors_13)); }
	inline ObjectU5BU5D_t1202231967* get_editors_13() const { return ___editors_13; }
	inline ObjectU5BU5D_t1202231967** get_address_of_editors_13() { return &___editors_13; }
	inline void set_editors_13(ObjectU5BU5D_t1202231967* value)
	{
		___editors_13 = value;
		Il2CppCodeGenWriteBarrier((&___editors_13), value);
	}

	inline static int32_t get_offset_of_editorTypes_14() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3696739850, ___editorTypes_14)); }
	inline TypeU5BU5D_t3807733968* get_editorTypes_14() const { return ___editorTypes_14; }
	inline TypeU5BU5D_t3807733968** get_address_of_editorTypes_14() { return &___editorTypes_14; }
	inline void set_editorTypes_14(TypeU5BU5D_t3807733968* value)
	{
		___editorTypes_14 = value;
		Il2CppCodeGenWriteBarrier((&___editorTypes_14), value);
	}

	inline static int32_t get_offset_of_editorCount_15() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3696739850, ___editorCount_15)); }
	inline int32_t get_editorCount_15() const { return ___editorCount_15; }
	inline int32_t* get_address_of_editorCount_15() { return &___editorCount_15; }
	inline void set_editorCount_15(int32_t value)
	{
		___editorCount_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3696739850_H
#ifndef TYPECONVERTERATTRIBUTE_T421331380_H
#define TYPECONVERTERATTRIBUTE_T421331380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t421331380  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t421331380, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_0), value);
	}
};

struct TypeConverterAttribute_t421331380_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t421331380 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t421331380_StaticFields, ___Default_1)); }
	inline TypeConverterAttribute_t421331380 * get_Default_1() const { return ___Default_1; }
	inline TypeConverterAttribute_t421331380 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(TypeConverterAttribute_t421331380 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T421331380_H
#ifndef REFRESHEVENTARGS_T1568420707_H
#define REFRESHEVENTARGS_T1568420707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t1568420707  : public EventArgs_t3429579474
{
public:
	// System.Type System.ComponentModel.RefreshEventArgs::typeChanged
	Type_t * ___typeChanged_1;

public:
	inline static int32_t get_offset_of_typeChanged_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t1568420707, ___typeChanged_1)); }
	inline Type_t * get_typeChanged_1() const { return ___typeChanged_1; }
	inline Type_t ** get_address_of_typeChanged_1() { return &___typeChanged_1; }
	inline void set_typeChanged_1(Type_t * value)
	{
		___typeChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___typeChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTARGS_T1568420707_H
#ifndef SETTINGSBINDABLEATTRIBUTE_T3935083639_H
#define SETTINGSBINDABLEATTRIBUTE_T3935083639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SettingsBindableAttribute
struct  SettingsBindableAttribute_t3935083639  : public Attribute_t1602879233
{
public:
	// System.Boolean System.ComponentModel.SettingsBindableAttribute::_bindable
	bool ____bindable_2;

public:
	inline static int32_t get_offset_of__bindable_2() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t3935083639, ____bindable_2)); }
	inline bool get__bindable_2() const { return ____bindable_2; }
	inline bool* get_address_of__bindable_2() { return &____bindable_2; }
	inline void set__bindable_2(bool value)
	{
		____bindable_2 = value;
	}
};

struct SettingsBindableAttribute_t3935083639_StaticFields
{
public:
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::Yes
	SettingsBindableAttribute_t3935083639 * ___Yes_0;
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::No
	SettingsBindableAttribute_t3935083639 * ___No_1;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t3935083639_StaticFields, ___Yes_0)); }
	inline SettingsBindableAttribute_t3935083639 * get_Yes_0() const { return ___Yes_0; }
	inline SettingsBindableAttribute_t3935083639 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(SettingsBindableAttribute_t3935083639 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(SettingsBindableAttribute_t3935083639_StaticFields, ___No_1)); }
	inline SettingsBindableAttribute_t3935083639 * get_No_1() const { return ___No_1; }
	inline SettingsBindableAttribute_t3935083639 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(SettingsBindableAttribute_t3935083639 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSBINDABLEATTRIBUTE_T3935083639_H
#ifndef EMPTYCUSTOMTYPEDESCRIPTOR_T2894271836_H
#define EMPTYCUSTOMTYPEDESCRIPTOR_T2894271836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct  EmptyCustomTypeDescriptor_t2894271836  : public CustomTypeDescriptor_t2177202805
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYCUSTOMTYPEDESCRIPTOR_T2894271836_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T2026808421_H
#define ENUM_T2026808421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2026808421  : public ValueType_t1706913817
{
public:

public:
};

struct Enum_t2026808421_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1705485309* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2026808421_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1705485309* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1705485309** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1705485309* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2026808421_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2026808421_marshaled_com
{
};
#endif // ENUM_T2026808421_H
#ifndef VOID_T4233125135_H
#define VOID_T4233125135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t4233125135 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t4233125135__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T4233125135_H
#ifndef BITVECTOR32_T373375838_H
#define BITVECTOR32_T373375838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.BitVector32
struct  BitVector32_t373375838 
{
public:
	// System.UInt32 System.Collections.Specialized.BitVector32::data
	uint32_t ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(BitVector32_t373375838, ___data_0)); }
	inline uint32_t get_data_0() const { return ___data_0; }
	inline uint32_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(uint32_t value)
	{
		___data_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITVECTOR32_T373375838_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t503540002 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t503540002 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t503540002 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t503540002 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t503540002 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t503540002 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t503540002 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t503540002 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef BOOLEAN_T81383802_H
#define BOOLEAN_T81383802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t81383802 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t81383802, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t81383802_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t81383802_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t81383802_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T81383802_H
#ifndef SYSTEMEXCEPTION_T3730317307_H
#define SYSTEMEXCEPTION_T3730317307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3730317307  : public Exception_t3288061028
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3730317307_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3463027901_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3463027901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t3463027901  : public Attribute_t1602879233
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3463027901, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t3463027901_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t3463027901 * ___No_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t3463027901 * ___Yes_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t3463027901 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3463027901_StaticFields, ___No_1)); }
	inline RecommendedAsConfigurableAttribute_t3463027901 * get_No_1() const { return ___No_1; }
	inline RecommendedAsConfigurableAttribute_t3463027901 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(RecommendedAsConfigurableAttribute_t3463027901 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3463027901_StaticFields, ___Yes_2)); }
	inline RecommendedAsConfigurableAttribute_t3463027901 * get_Yes_2() const { return ___Yes_2; }
	inline RecommendedAsConfigurableAttribute_t3463027901 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(RecommendedAsConfigurableAttribute_t3463027901 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t3463027901_StaticFields, ___Default_3)); }
	inline RecommendedAsConfigurableAttribute_t3463027901 * get_Default_3() const { return ___Default_3; }
	inline RecommendedAsConfigurableAttribute_t3463027901 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(RecommendedAsConfigurableAttribute_t3463027901 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T3463027901_H
#ifndef EVENTDESCRIPTOR_T2758958715_H
#define EVENTDESCRIPTOR_T2758958715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t2758958715  : public MemberDescriptor_t3541007810
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T2758958715_H
#ifndef INSTALLERTYPEATTRIBUTE_T1778399479_H
#define INSTALLERTYPEATTRIBUTE_T1778399479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstallerTypeAttribute
struct  InstallerTypeAttribute_t1778399479  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.InstallerTypeAttribute::_typeName
	String_t* ____typeName_0;

public:
	inline static int32_t get_offset_of__typeName_0() { return static_cast<int32_t>(offsetof(InstallerTypeAttribute_t1778399479, ____typeName_0)); }
	inline String_t* get__typeName_0() const { return ____typeName_0; }
	inline String_t** get_address_of__typeName_0() { return &____typeName_0; }
	inline void set__typeName_0(String_t* value)
	{
		____typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTALLERTYPEATTRIBUTE_T1778399479_H
#ifndef COMPONENTCOLLECTION_T1566145613_H
#define COMPONENTCOLLECTION_T1566145613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t1566145613  : public ReadOnlyCollectionBase_t2343526797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T1566145613_H
#ifndef DESCRIPTIONATTRIBUTE_T2940155393_H
#define DESCRIPTIONATTRIBUTE_T2940155393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t2940155393  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2940155393, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}
};

struct DescriptionAttribute_t2940155393_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2940155393 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2940155393_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_t2940155393 * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_t2940155393 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_t2940155393 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T2940155393_H
#ifndef DESIGNONLYATTRIBUTE_T3936029912_H
#define DESIGNONLYATTRIBUTE_T3936029912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t3936029912  : public Attribute_t1602879233
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::isDesignOnly
	bool ___isDesignOnly_0;

public:
	inline static int32_t get_offset_of_isDesignOnly_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3936029912, ___isDesignOnly_0)); }
	inline bool get_isDesignOnly_0() const { return ___isDesignOnly_0; }
	inline bool* get_address_of_isDesignOnly_0() { return &___isDesignOnly_0; }
	inline void set_isDesignOnly_0(bool value)
	{
		___isDesignOnly_0 = value;
	}
};

struct DesignOnlyAttribute_t3936029912_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t3936029912 * ___Yes_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t3936029912 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t3936029912 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3936029912_StaticFields, ___Yes_1)); }
	inline DesignOnlyAttribute_t3936029912 * get_Yes_1() const { return ___Yes_1; }
	inline DesignOnlyAttribute_t3936029912 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(DesignOnlyAttribute_t3936029912 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3936029912_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t3936029912 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t3936029912 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t3936029912 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3936029912_StaticFields, ___Default_3)); }
	inline DesignOnlyAttribute_t3936029912 * get_Default_3() const { return ___Default_3; }
	inline DesignOnlyAttribute_t3936029912 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignOnlyAttribute_t3936029912 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T3936029912_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T2949062810_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T2949062810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t2949062810  : public Attribute_t1602879233
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2949062810, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t2949062810_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t2949062810 * ___Yes_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t2949062810 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t2949062810 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2949062810_StaticFields, ___Yes_1)); }
	inline DesignTimeVisibleAttribute_t2949062810 * get_Yes_1() const { return ___Yes_1; }
	inline DesignTimeVisibleAttribute_t2949062810 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(DesignTimeVisibleAttribute_t2949062810 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2949062810_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t2949062810 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t2949062810 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t2949062810 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t2949062810_StaticFields, ___Default_3)); }
	inline DesignTimeVisibleAttribute_t2949062810 * get_Default_3() const { return ___Default_3; }
	inline DesignTimeVisibleAttribute_t2949062810 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignTimeVisibleAttribute_t2949062810 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T2949062810_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1588096197_H
#define DEFAULTPROPERTYATTRIBUTE_T1588096197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1588096197  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1588096197, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

struct DefaultPropertyAttribute_t1588096197_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1588096197 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1588096197_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1588096197 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1588096197 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1588096197 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1588096197_H
#ifndef DESIGNERATTRIBUTE_T2863989512_H
#define DESIGNERATTRIBUTE_T2863989512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t2863989512  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.DesignerAttribute::designerTypeName
	String_t* ___designerTypeName_0;
	// System.String System.ComponentModel.DesignerAttribute::designerBaseTypeName
	String_t* ___designerBaseTypeName_1;
	// System.String System.ComponentModel.DesignerAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_designerTypeName_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2863989512, ___designerTypeName_0)); }
	inline String_t* get_designerTypeName_0() const { return ___designerTypeName_0; }
	inline String_t** get_address_of_designerTypeName_0() { return &___designerTypeName_0; }
	inline void set_designerTypeName_0(String_t* value)
	{
		___designerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___designerTypeName_0), value);
	}

	inline static int32_t get_offset_of_designerBaseTypeName_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2863989512, ___designerBaseTypeName_1)); }
	inline String_t* get_designerBaseTypeName_1() const { return ___designerBaseTypeName_1; }
	inline String_t** get_address_of_designerBaseTypeName_1() { return &___designerBaseTypeName_1; }
	inline void set_designerBaseTypeName_1(String_t* value)
	{
		___designerBaseTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___designerBaseTypeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2863989512, ___typeId_2)); }
	inline String_t* get_typeId_2() const { return ___typeId_2; }
	inline String_t** get_address_of_typeId_2() { return &___typeId_2; }
	inline void set_typeId_2(String_t* value)
	{
		___typeId_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T2863989512_H
#ifndef DEFAULTEVENTATTRIBUTE_T3371076816_H
#define DEFAULTEVENTATTRIBUTE_T3371076816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t3371076816  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3371076816, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

struct DefaultEventAttribute_t3371076816_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t3371076816 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3371076816_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t3371076816 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t3371076816 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t3371076816 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T3371076816_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T2356304537_H
#define DESIGNERCATEGORYATTRIBUTE_T2356304537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t2356304537  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;
	// System.String System.ComponentModel.DesignerCategoryAttribute::typeId
	String_t* ___typeId_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2356304537, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_typeId_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2356304537, ___typeId_1)); }
	inline String_t* get_typeId_1() const { return ___typeId_1; }
	inline String_t** get_address_of_typeId_1() { return &___typeId_1; }
	inline void set_typeId_1(String_t* value)
	{
		___typeId_1 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_1), value);
	}
};

struct DesignerCategoryAttribute_t2356304537_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t2356304537 * ___Component_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t2356304537 * ___Default_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t2356304537 * ___Form_4;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t2356304537 * ___Generic_5;

public:
	inline static int32_t get_offset_of_Component_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2356304537_StaticFields, ___Component_2)); }
	inline DesignerCategoryAttribute_t2356304537 * get_Component_2() const { return ___Component_2; }
	inline DesignerCategoryAttribute_t2356304537 ** get_address_of_Component_2() { return &___Component_2; }
	inline void set_Component_2(DesignerCategoryAttribute_t2356304537 * value)
	{
		___Component_2 = value;
		Il2CppCodeGenWriteBarrier((&___Component_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2356304537_StaticFields, ___Default_3)); }
	inline DesignerCategoryAttribute_t2356304537 * get_Default_3() const { return ___Default_3; }
	inline DesignerCategoryAttribute_t2356304537 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignerCategoryAttribute_t2356304537 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}

	inline static int32_t get_offset_of_Form_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2356304537_StaticFields, ___Form_4)); }
	inline DesignerCategoryAttribute_t2356304537 * get_Form_4() const { return ___Form_4; }
	inline DesignerCategoryAttribute_t2356304537 ** get_address_of_Form_4() { return &___Form_4; }
	inline void set_Form_4(DesignerCategoryAttribute_t2356304537 * value)
	{
		___Form_4 = value;
		Il2CppCodeGenWriteBarrier((&___Form_4), value);
	}

	inline static int32_t get_offset_of_Generic_5() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2356304537_StaticFields, ___Generic_5)); }
	inline DesignerCategoryAttribute_t2356304537 * get_Generic_5() const { return ___Generic_5; }
	inline DesignerCategoryAttribute_t2356304537 ** get_address_of_Generic_5() { return &___Generic_5; }
	inline void set_Generic_5(DesignerCategoryAttribute_t2356304537 * value)
	{
		___Generic_5 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T2356304537_H
#ifndef DELEGATINGTYPEDESCRIPTIONPROVIDER_T571437091_H
#define DELEGATINGTYPEDESCRIPTIONPROVIDER_T571437091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DelegatingTypeDescriptionProvider
struct  DelegatingTypeDescriptionProvider_t571437091  : public TypeDescriptionProvider_t2136278850
{
public:
	// System.Type System.ComponentModel.DelegatingTypeDescriptionProvider::_type
	Type_t * ____type_2;

public:
	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(DelegatingTypeDescriptionProvider_t571437091, ____type_2)); }
	inline Type_t * get__type_2() const { return ____type_2; }
	inline Type_t ** get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(Type_t * value)
	{
		____type_2 = value;
		Il2CppCodeGenWriteBarrier((&____type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATINGTYPEDESCRIPTIONPROVIDER_T571437091_H
#ifndef COMPONENT_T474650112_H
#define COMPONENT_T474650112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t474650112  : public MarshalByRefObject_t2617547684
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t1510572673 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t474650112, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((&___site_2), value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t474650112, ___events_3)); }
	inline EventHandlerList_t1510572673 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t1510572673 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t1510572673 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((&___events_3), value);
	}
};

struct Component_t474650112_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t474650112_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventDisposed_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T474650112_H
#ifndef BROWSABLEATTRIBUTE_T1785650251_H
#define BROWSABLEATTRIBUTE_T1785650251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t1785650251  : public Attribute_t1602879233
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_3;

public:
	inline static int32_t get_offset_of_browsable_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1785650251, ___browsable_3)); }
	inline bool get_browsable_3() const { return ___browsable_3; }
	inline bool* get_address_of_browsable_3() { return &___browsable_3; }
	inline void set_browsable_3(bool value)
	{
		___browsable_3 = value;
	}
};

struct BrowsableAttribute_t1785650251_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t1785650251 * ___Yes_0;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t1785650251 * ___No_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t1785650251 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1785650251_StaticFields, ___Yes_0)); }
	inline BrowsableAttribute_t1785650251 * get_Yes_0() const { return ___Yes_0; }
	inline BrowsableAttribute_t1785650251 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(BrowsableAttribute_t1785650251 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1785650251_StaticFields, ___No_1)); }
	inline BrowsableAttribute_t1785650251 * get_No_1() const { return ___No_1; }
	inline BrowsableAttribute_t1785650251 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(BrowsableAttribute_t1785650251 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1785650251_StaticFields, ___Default_2)); }
	inline BrowsableAttribute_t1785650251 * get_Default_2() const { return ___Default_2; }
	inline BrowsableAttribute_t1785650251 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(BrowsableAttribute_t1785650251 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T1785650251_H
#ifndef DEFAULTVALUEATTRIBUTE_T3090176339_H
#define DEFAULTVALUEATTRIBUTE_T3090176339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t3090176339  : public Attribute_t1602879233
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::value
	RuntimeObject * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t3090176339, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T3090176339_H
#ifndef ATTRIBUTEENTRY_T1439066719_H
#define ATTRIBUTEENTRY_T1439066719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection/AttributeEntry
struct  AttributeEntry_t1439066719 
{
public:
	// System.Type System.ComponentModel.AttributeCollection/AttributeEntry::type
	Type_t * ___type_0;
	// System.Int32 System.ComponentModel.AttributeCollection/AttributeEntry::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AttributeEntry_t1439066719, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(AttributeEntry_t1439066719, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.AttributeCollection/AttributeEntry
struct AttributeEntry_t1439066719_marshaled_pinvoke
{
	Type_t * ___type_0;
	int32_t ___index_1;
};
// Native definition for COM marshalling of System.ComponentModel.AttributeCollection/AttributeEntry
struct AttributeEntry_t1439066719_marshaled_com
{
	Type_t * ___type_0;
	int32_t ___index_1;
};
#endif // ATTRIBUTEENTRY_T1439066719_H
#ifndef EXCLUDEFROMCODECOVERAGEATTRIBUTE_T3581692502_H
#define EXCLUDEFROMCODECOVERAGEATTRIBUTE_T3581692502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute
struct  ExcludeFromCodeCoverageAttribute_t3581692502  : public Attribute_t1602879233
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMCODECOVERAGEATTRIBUTE_T3581692502_H
#ifndef DISPLAYNAMEATTRIBUTE_T1434268835_H
#define DISPLAYNAMEATTRIBUTE_T1434268835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t1434268835  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::_displayName
	String_t* ____displayName_1;

public:
	inline static int32_t get_offset_of__displayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t1434268835, ____displayName_1)); }
	inline String_t* get__displayName_1() const { return ____displayName_1; }
	inline String_t** get_address_of__displayName_1() { return &____displayName_1; }
	inline void set__displayName_1(String_t* value)
	{
		____displayName_1 = value;
		Il2CppCodeGenWriteBarrier((&____displayName_1), value);
	}
};

struct DisplayNameAttribute_t1434268835_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t1434268835 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t1434268835_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t1434268835 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t1434268835 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t1434268835 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEATTRIBUTE_T1434268835_H
#ifndef EDITORATTRIBUTE_T1183279190_H
#define EDITORATTRIBUTE_T1183279190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t1183279190  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.EditorAttribute::baseTypeName
	String_t* ___baseTypeName_0;
	// System.String System.ComponentModel.EditorAttribute::typeName
	String_t* ___typeName_1;
	// System.String System.ComponentModel.EditorAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_baseTypeName_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t1183279190, ___baseTypeName_0)); }
	inline String_t* get_baseTypeName_0() const { return ___baseTypeName_0; }
	inline String_t** get_address_of_baseTypeName_0() { return &___baseTypeName_0; }
	inline void set_baseTypeName_0(String_t* value)
	{
		___baseTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseTypeName_0), value);
	}

	inline static int32_t get_offset_of_typeName_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t1183279190, ___typeName_1)); }
	inline String_t* get_typeName_1() const { return ___typeName_1; }
	inline String_t** get_address_of_typeName_1() { return &___typeName_1; }
	inline void set_typeName_1(String_t* value)
	{
		___typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(EditorAttribute_t1183279190, ___typeId_2)); }
	inline String_t* get_typeId_2() const { return ___typeId_2; }
	inline String_t** get_address_of_typeId_2() { return &___typeId_2; }
	inline void set_typeId_2(String_t* value)
	{
		___typeId_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T1183279190_H
#ifndef ATTRIBUTEPROVIDERATTRIBUTE_T1695167744_H
#define ATTRIBUTEPROVIDERATTRIBUTE_T1695167744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeProviderAttribute
struct  AttributeProviderAttribute_t1695167744  : public Attribute_t1602879233
{
public:
	// System.String System.ComponentModel.AttributeProviderAttribute::_typeName
	String_t* ____typeName_0;
	// System.String System.ComponentModel.AttributeProviderAttribute::_propertyName
	String_t* ____propertyName_1;

public:
	inline static int32_t get_offset_of__typeName_0() { return static_cast<int32_t>(offsetof(AttributeProviderAttribute_t1695167744, ____typeName_0)); }
	inline String_t* get__typeName_0() const { return ____typeName_0; }
	inline String_t** get_address_of__typeName_0() { return &____typeName_0; }
	inline void set__typeName_0(String_t* value)
	{
		____typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_0), value);
	}

	inline static int32_t get_offset_of__propertyName_1() { return static_cast<int32_t>(offsetof(AttributeProviderAttribute_t1695167744, ____propertyName_1)); }
	inline String_t* get__propertyName_1() const { return ____propertyName_1; }
	inline String_t** get_address_of__propertyName_1() { return &____propertyName_1; }
	inline void set__propertyName_1(String_t* value)
	{
		____propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&____propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEPROVIDERATTRIBUTE_T1695167744_H
#ifndef ARGUMENTEXCEPTION_T4229326037_H
#define ARGUMENTEXCEPTION_T4229326037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t4229326037  : public SystemException_t3730317307
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_16;

public:
	inline static int32_t get_offset_of_m_paramName_16() { return static_cast<int32_t>(offsetof(ArgumentException_t4229326037, ___m_paramName_16)); }
	inline String_t* get_m_paramName_16() const { return ___m_paramName_16; }
	inline String_t** get_address_of_m_paramName_16() { return &___m_paramName_16; }
	inline void set_m_paramName_16(String_t* value)
	{
		___m_paramName_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T4229326037_H
#ifndef SIMPLEPROPERTYDESCRIPTOR_T2096068728_H
#define SIMPLEPROPERTYDESCRIPTOR_T2096068728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/SimplePropertyDescriptor
struct  SimplePropertyDescriptor_t2096068728  : public PropertyDescriptor_t3696739850
{
public:
	// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::componentType
	Type_t * ___componentType_16;
	// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::propertyType
	Type_t * ___propertyType_17;

public:
	inline static int32_t get_offset_of_componentType_16() { return static_cast<int32_t>(offsetof(SimplePropertyDescriptor_t2096068728, ___componentType_16)); }
	inline Type_t * get_componentType_16() const { return ___componentType_16; }
	inline Type_t ** get_address_of_componentType_16() { return &___componentType_16; }
	inline void set_componentType_16(Type_t * value)
	{
		___componentType_16 = value;
		Il2CppCodeGenWriteBarrier((&___componentType_16), value);
	}

	inline static int32_t get_offset_of_propertyType_17() { return static_cast<int32_t>(offsetof(SimplePropertyDescriptor_t2096068728, ___propertyType_17)); }
	inline Type_t * get_propertyType_17() const { return ___propertyType_17; }
	inline Type_t ** get_address_of_propertyType_17() { return &___propertyType_17; }
	inline void set_propertyType_17(Type_t * value)
	{
		___propertyType_17 = value;
		Il2CppCodeGenWriteBarrier((&___propertyType_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEPROPERTYDESCRIPTOR_T2096068728_H
#ifndef TYPECONVERTER_T96354694_H
#define TYPECONVERTER_T96354694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t96354694  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t96354694_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t96354694_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T96354694_H
#ifndef REFLECTTYPEDESCRIPTIONPROVIDER_T3800793144_H
#define REFLECTTYPEDESCRIPTIONPROVIDER_T3800793144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectTypeDescriptionProvider
struct  ReflectTypeDescriptionProvider_t3800793144  : public TypeDescriptionProvider_t2136278850
{
public:
	// System.Collections.Hashtable System.ComponentModel.ReflectTypeDescriptionProvider::_typeData
	Hashtable_t1762597163 * ____typeData_2;

public:
	inline static int32_t get_offset_of__typeData_2() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144, ____typeData_2)); }
	inline Hashtable_t1762597163 * get__typeData_2() const { return ____typeData_2; }
	inline Hashtable_t1762597163 ** get_address_of__typeData_2() { return &____typeData_2; }
	inline void set__typeData_2(Hashtable_t1762597163 * value)
	{
		____typeData_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeData_2), value);
	}
};

struct ReflectTypeDescriptionProvider_t3800793144_StaticFields
{
public:
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_typeConstructor
	TypeU5BU5D_t3807733968* ____typeConstructor_3;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicTypeConverters
	Hashtable_t1762597163 * ____intrinsicTypeConverters_4;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicReferenceKey
	RuntimeObject * ____intrinsicReferenceKey_5;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicNullableKey
	RuntimeObject * ____intrinsicNullableKey_6;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_dictionaryKey
	RuntimeObject * ____dictionaryKey_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_propertyCache
	Hashtable_t1762597163 * ____propertyCache_8;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_attributeCache
	Hashtable_t1762597163 * ____attributeCache_9;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_extendedPropertyCache
	Hashtable_t1762597163 * ____extendedPropertyCache_10;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderKey
	Guid_t  ____extenderProviderKey_11;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderPropertiesKey
	Guid_t  ____extenderPropertiesKey_12;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderPropertiesKey
	Guid_t  ____extenderProviderPropertiesKey_13;
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_skipInterfaceAttributeList
	TypeU5BU5D_t3807733968* ____skipInterfaceAttributeList_14;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_internalSyncObject
	RuntimeObject * ____internalSyncObject_15;

public:
	inline static int32_t get_offset_of__typeConstructor_3() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____typeConstructor_3)); }
	inline TypeU5BU5D_t3807733968* get__typeConstructor_3() const { return ____typeConstructor_3; }
	inline TypeU5BU5D_t3807733968** get_address_of__typeConstructor_3() { return &____typeConstructor_3; }
	inline void set__typeConstructor_3(TypeU5BU5D_t3807733968* value)
	{
		____typeConstructor_3 = value;
		Il2CppCodeGenWriteBarrier((&____typeConstructor_3), value);
	}

	inline static int32_t get_offset_of__intrinsicTypeConverters_4() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____intrinsicTypeConverters_4)); }
	inline Hashtable_t1762597163 * get__intrinsicTypeConverters_4() const { return ____intrinsicTypeConverters_4; }
	inline Hashtable_t1762597163 ** get_address_of__intrinsicTypeConverters_4() { return &____intrinsicTypeConverters_4; }
	inline void set__intrinsicTypeConverters_4(Hashtable_t1762597163 * value)
	{
		____intrinsicTypeConverters_4 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicTypeConverters_4), value);
	}

	inline static int32_t get_offset_of__intrinsicReferenceKey_5() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____intrinsicReferenceKey_5)); }
	inline RuntimeObject * get__intrinsicReferenceKey_5() const { return ____intrinsicReferenceKey_5; }
	inline RuntimeObject ** get_address_of__intrinsicReferenceKey_5() { return &____intrinsicReferenceKey_5; }
	inline void set__intrinsicReferenceKey_5(RuntimeObject * value)
	{
		____intrinsicReferenceKey_5 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicReferenceKey_5), value);
	}

	inline static int32_t get_offset_of__intrinsicNullableKey_6() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____intrinsicNullableKey_6)); }
	inline RuntimeObject * get__intrinsicNullableKey_6() const { return ____intrinsicNullableKey_6; }
	inline RuntimeObject ** get_address_of__intrinsicNullableKey_6() { return &____intrinsicNullableKey_6; }
	inline void set__intrinsicNullableKey_6(RuntimeObject * value)
	{
		____intrinsicNullableKey_6 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicNullableKey_6), value);
	}

	inline static int32_t get_offset_of__dictionaryKey_7() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____dictionaryKey_7)); }
	inline RuntimeObject * get__dictionaryKey_7() const { return ____dictionaryKey_7; }
	inline RuntimeObject ** get_address_of__dictionaryKey_7() { return &____dictionaryKey_7; }
	inline void set__dictionaryKey_7(RuntimeObject * value)
	{
		____dictionaryKey_7 = value;
		Il2CppCodeGenWriteBarrier((&____dictionaryKey_7), value);
	}

	inline static int32_t get_offset_of__propertyCache_8() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____propertyCache_8)); }
	inline Hashtable_t1762597163 * get__propertyCache_8() const { return ____propertyCache_8; }
	inline Hashtable_t1762597163 ** get_address_of__propertyCache_8() { return &____propertyCache_8; }
	inline void set__propertyCache_8(Hashtable_t1762597163 * value)
	{
		____propertyCache_8 = value;
		Il2CppCodeGenWriteBarrier((&____propertyCache_8), value);
	}

	inline static int32_t get_offset_of__attributeCache_9() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____attributeCache_9)); }
	inline Hashtable_t1762597163 * get__attributeCache_9() const { return ____attributeCache_9; }
	inline Hashtable_t1762597163 ** get_address_of__attributeCache_9() { return &____attributeCache_9; }
	inline void set__attributeCache_9(Hashtable_t1762597163 * value)
	{
		____attributeCache_9 = value;
		Il2CppCodeGenWriteBarrier((&____attributeCache_9), value);
	}

	inline static int32_t get_offset_of__extendedPropertyCache_10() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____extendedPropertyCache_10)); }
	inline Hashtable_t1762597163 * get__extendedPropertyCache_10() const { return ____extendedPropertyCache_10; }
	inline Hashtable_t1762597163 ** get_address_of__extendedPropertyCache_10() { return &____extendedPropertyCache_10; }
	inline void set__extendedPropertyCache_10(Hashtable_t1762597163 * value)
	{
		____extendedPropertyCache_10 = value;
		Il2CppCodeGenWriteBarrier((&____extendedPropertyCache_10), value);
	}

	inline static int32_t get_offset_of__extenderProviderKey_11() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____extenderProviderKey_11)); }
	inline Guid_t  get__extenderProviderKey_11() const { return ____extenderProviderKey_11; }
	inline Guid_t * get_address_of__extenderProviderKey_11() { return &____extenderProviderKey_11; }
	inline void set__extenderProviderKey_11(Guid_t  value)
	{
		____extenderProviderKey_11 = value;
	}

	inline static int32_t get_offset_of__extenderPropertiesKey_12() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____extenderPropertiesKey_12)); }
	inline Guid_t  get__extenderPropertiesKey_12() const { return ____extenderPropertiesKey_12; }
	inline Guid_t * get_address_of__extenderPropertiesKey_12() { return &____extenderPropertiesKey_12; }
	inline void set__extenderPropertiesKey_12(Guid_t  value)
	{
		____extenderPropertiesKey_12 = value;
	}

	inline static int32_t get_offset_of__extenderProviderPropertiesKey_13() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____extenderProviderPropertiesKey_13)); }
	inline Guid_t  get__extenderProviderPropertiesKey_13() const { return ____extenderProviderPropertiesKey_13; }
	inline Guid_t * get_address_of__extenderProviderPropertiesKey_13() { return &____extenderProviderPropertiesKey_13; }
	inline void set__extenderProviderPropertiesKey_13(Guid_t  value)
	{
		____extenderProviderPropertiesKey_13 = value;
	}

	inline static int32_t get_offset_of__skipInterfaceAttributeList_14() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____skipInterfaceAttributeList_14)); }
	inline TypeU5BU5D_t3807733968* get__skipInterfaceAttributeList_14() const { return ____skipInterfaceAttributeList_14; }
	inline TypeU5BU5D_t3807733968** get_address_of__skipInterfaceAttributeList_14() { return &____skipInterfaceAttributeList_14; }
	inline void set__skipInterfaceAttributeList_14(TypeU5BU5D_t3807733968* value)
	{
		____skipInterfaceAttributeList_14 = value;
		Il2CppCodeGenWriteBarrier((&____skipInterfaceAttributeList_14), value);
	}

	inline static int32_t get_offset_of__internalSyncObject_15() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t3800793144_StaticFields, ____internalSyncObject_15)); }
	inline RuntimeObject * get__internalSyncObject_15() const { return ____internalSyncObject_15; }
	inline RuntimeObject ** get_address_of__internalSyncObject_15() { return &____internalSyncObject_15; }
	inline void set__internalSyncObject_15(RuntimeObject * value)
	{
		____internalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&____internalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTTYPEDESCRIPTIONPROVIDER_T3800793144_H
#ifndef REFLECTPROPERTYDESCRIPTOR_T589801430_H
#define REFLECTPROPERTYDESCRIPTOR_T589801430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectPropertyDescriptor
struct  ReflectPropertyDescriptor_t589801430  : public PropertyDescriptor_t3696739850
{
public:
	// System.Collections.Specialized.BitVector32 System.ComponentModel.ReflectPropertyDescriptor::state
	BitVector32_t373375838  ___state_30;
	// System.Type System.ComponentModel.ReflectPropertyDescriptor::componentClass
	Type_t * ___componentClass_31;
	// System.Type System.ComponentModel.ReflectPropertyDescriptor::type
	Type_t * ___type_32;
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectPropertyDescriptor::propInfo
	PropertyInfo_t * ___propInfo_33;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectPropertyDescriptor::getMethod
	MethodInfo_t * ___getMethod_34;
	// System.Reflection.MethodInfo System.ComponentModel.ReflectPropertyDescriptor::setMethod
	MethodInfo_t * ___setMethod_35;
	// System.Type System.ComponentModel.ReflectPropertyDescriptor::receiverType
	Type_t * ___receiverType_36;

public:
	inline static int32_t get_offset_of_state_30() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430, ___state_30)); }
	inline BitVector32_t373375838  get_state_30() const { return ___state_30; }
	inline BitVector32_t373375838 * get_address_of_state_30() { return &___state_30; }
	inline void set_state_30(BitVector32_t373375838  value)
	{
		___state_30 = value;
	}

	inline static int32_t get_offset_of_componentClass_31() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430, ___componentClass_31)); }
	inline Type_t * get_componentClass_31() const { return ___componentClass_31; }
	inline Type_t ** get_address_of_componentClass_31() { return &___componentClass_31; }
	inline void set_componentClass_31(Type_t * value)
	{
		___componentClass_31 = value;
		Il2CppCodeGenWriteBarrier((&___componentClass_31), value);
	}

	inline static int32_t get_offset_of_type_32() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430, ___type_32)); }
	inline Type_t * get_type_32() const { return ___type_32; }
	inline Type_t ** get_address_of_type_32() { return &___type_32; }
	inline void set_type_32(Type_t * value)
	{
		___type_32 = value;
		Il2CppCodeGenWriteBarrier((&___type_32), value);
	}

	inline static int32_t get_offset_of_propInfo_33() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430, ___propInfo_33)); }
	inline PropertyInfo_t * get_propInfo_33() const { return ___propInfo_33; }
	inline PropertyInfo_t ** get_address_of_propInfo_33() { return &___propInfo_33; }
	inline void set_propInfo_33(PropertyInfo_t * value)
	{
		___propInfo_33 = value;
		Il2CppCodeGenWriteBarrier((&___propInfo_33), value);
	}

	inline static int32_t get_offset_of_getMethod_34() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430, ___getMethod_34)); }
	inline MethodInfo_t * get_getMethod_34() const { return ___getMethod_34; }
	inline MethodInfo_t ** get_address_of_getMethod_34() { return &___getMethod_34; }
	inline void set_getMethod_34(MethodInfo_t * value)
	{
		___getMethod_34 = value;
		Il2CppCodeGenWriteBarrier((&___getMethod_34), value);
	}

	inline static int32_t get_offset_of_setMethod_35() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430, ___setMethod_35)); }
	inline MethodInfo_t * get_setMethod_35() const { return ___setMethod_35; }
	inline MethodInfo_t ** get_address_of_setMethod_35() { return &___setMethod_35; }
	inline void set_setMethod_35(MethodInfo_t * value)
	{
		___setMethod_35 = value;
		Il2CppCodeGenWriteBarrier((&___setMethod_35), value);
	}

	inline static int32_t get_offset_of_receiverType_36() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430, ___receiverType_36)); }
	inline Type_t * get_receiverType_36() const { return ___receiverType_36; }
	inline Type_t ** get_address_of_receiverType_36() { return &___receiverType_36; }
	inline void set_receiverType_36(Type_t * value)
	{
		___receiverType_36 = value;
		Il2CppCodeGenWriteBarrier((&___receiverType_36), value);
	}
};

struct ReflectPropertyDescriptor_t589801430_StaticFields
{
public:
	// System.Type[] System.ComponentModel.ReflectPropertyDescriptor::argsNone
	TypeU5BU5D_t3807733968* ___argsNone_16;
	// System.Object System.ComponentModel.ReflectPropertyDescriptor::noValue
	RuntimeObject * ___noValue_17;
	// System.Diagnostics.TraceSwitch System.ComponentModel.ReflectPropertyDescriptor::PropDescCreateSwitch
	TraceSwitch_t1514278438 * ___PropDescCreateSwitch_18;
	// System.Diagnostics.TraceSwitch System.ComponentModel.ReflectPropertyDescriptor::PropDescUsageSwitch
	TraceSwitch_t1514278438 * ___PropDescUsageSwitch_19;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitDefaultValueQueried
	int32_t ___BitDefaultValueQueried_20;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitGetQueried
	int32_t ___BitGetQueried_21;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitSetQueried
	int32_t ___BitSetQueried_22;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitShouldSerializeQueried
	int32_t ___BitShouldSerializeQueried_23;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitResetQueried
	int32_t ___BitResetQueried_24;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitChangedQueried
	int32_t ___BitChangedQueried_25;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitIPropChangedQueried
	int32_t ___BitIPropChangedQueried_26;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitReadOnlyChecked
	int32_t ___BitReadOnlyChecked_27;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitAmbientValueQueried
	int32_t ___BitAmbientValueQueried_28;
	// System.Int32 System.ComponentModel.ReflectPropertyDescriptor::BitSetOnDemand
	int32_t ___BitSetOnDemand_29;

public:
	inline static int32_t get_offset_of_argsNone_16() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___argsNone_16)); }
	inline TypeU5BU5D_t3807733968* get_argsNone_16() const { return ___argsNone_16; }
	inline TypeU5BU5D_t3807733968** get_address_of_argsNone_16() { return &___argsNone_16; }
	inline void set_argsNone_16(TypeU5BU5D_t3807733968* value)
	{
		___argsNone_16 = value;
		Il2CppCodeGenWriteBarrier((&___argsNone_16), value);
	}

	inline static int32_t get_offset_of_noValue_17() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___noValue_17)); }
	inline RuntimeObject * get_noValue_17() const { return ___noValue_17; }
	inline RuntimeObject ** get_address_of_noValue_17() { return &___noValue_17; }
	inline void set_noValue_17(RuntimeObject * value)
	{
		___noValue_17 = value;
		Il2CppCodeGenWriteBarrier((&___noValue_17), value);
	}

	inline static int32_t get_offset_of_PropDescCreateSwitch_18() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___PropDescCreateSwitch_18)); }
	inline TraceSwitch_t1514278438 * get_PropDescCreateSwitch_18() const { return ___PropDescCreateSwitch_18; }
	inline TraceSwitch_t1514278438 ** get_address_of_PropDescCreateSwitch_18() { return &___PropDescCreateSwitch_18; }
	inline void set_PropDescCreateSwitch_18(TraceSwitch_t1514278438 * value)
	{
		___PropDescCreateSwitch_18 = value;
		Il2CppCodeGenWriteBarrier((&___PropDescCreateSwitch_18), value);
	}

	inline static int32_t get_offset_of_PropDescUsageSwitch_19() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___PropDescUsageSwitch_19)); }
	inline TraceSwitch_t1514278438 * get_PropDescUsageSwitch_19() const { return ___PropDescUsageSwitch_19; }
	inline TraceSwitch_t1514278438 ** get_address_of_PropDescUsageSwitch_19() { return &___PropDescUsageSwitch_19; }
	inline void set_PropDescUsageSwitch_19(TraceSwitch_t1514278438 * value)
	{
		___PropDescUsageSwitch_19 = value;
		Il2CppCodeGenWriteBarrier((&___PropDescUsageSwitch_19), value);
	}

	inline static int32_t get_offset_of_BitDefaultValueQueried_20() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitDefaultValueQueried_20)); }
	inline int32_t get_BitDefaultValueQueried_20() const { return ___BitDefaultValueQueried_20; }
	inline int32_t* get_address_of_BitDefaultValueQueried_20() { return &___BitDefaultValueQueried_20; }
	inline void set_BitDefaultValueQueried_20(int32_t value)
	{
		___BitDefaultValueQueried_20 = value;
	}

	inline static int32_t get_offset_of_BitGetQueried_21() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitGetQueried_21)); }
	inline int32_t get_BitGetQueried_21() const { return ___BitGetQueried_21; }
	inline int32_t* get_address_of_BitGetQueried_21() { return &___BitGetQueried_21; }
	inline void set_BitGetQueried_21(int32_t value)
	{
		___BitGetQueried_21 = value;
	}

	inline static int32_t get_offset_of_BitSetQueried_22() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitSetQueried_22)); }
	inline int32_t get_BitSetQueried_22() const { return ___BitSetQueried_22; }
	inline int32_t* get_address_of_BitSetQueried_22() { return &___BitSetQueried_22; }
	inline void set_BitSetQueried_22(int32_t value)
	{
		___BitSetQueried_22 = value;
	}

	inline static int32_t get_offset_of_BitShouldSerializeQueried_23() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitShouldSerializeQueried_23)); }
	inline int32_t get_BitShouldSerializeQueried_23() const { return ___BitShouldSerializeQueried_23; }
	inline int32_t* get_address_of_BitShouldSerializeQueried_23() { return &___BitShouldSerializeQueried_23; }
	inline void set_BitShouldSerializeQueried_23(int32_t value)
	{
		___BitShouldSerializeQueried_23 = value;
	}

	inline static int32_t get_offset_of_BitResetQueried_24() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitResetQueried_24)); }
	inline int32_t get_BitResetQueried_24() const { return ___BitResetQueried_24; }
	inline int32_t* get_address_of_BitResetQueried_24() { return &___BitResetQueried_24; }
	inline void set_BitResetQueried_24(int32_t value)
	{
		___BitResetQueried_24 = value;
	}

	inline static int32_t get_offset_of_BitChangedQueried_25() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitChangedQueried_25)); }
	inline int32_t get_BitChangedQueried_25() const { return ___BitChangedQueried_25; }
	inline int32_t* get_address_of_BitChangedQueried_25() { return &___BitChangedQueried_25; }
	inline void set_BitChangedQueried_25(int32_t value)
	{
		___BitChangedQueried_25 = value;
	}

	inline static int32_t get_offset_of_BitIPropChangedQueried_26() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitIPropChangedQueried_26)); }
	inline int32_t get_BitIPropChangedQueried_26() const { return ___BitIPropChangedQueried_26; }
	inline int32_t* get_address_of_BitIPropChangedQueried_26() { return &___BitIPropChangedQueried_26; }
	inline void set_BitIPropChangedQueried_26(int32_t value)
	{
		___BitIPropChangedQueried_26 = value;
	}

	inline static int32_t get_offset_of_BitReadOnlyChecked_27() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitReadOnlyChecked_27)); }
	inline int32_t get_BitReadOnlyChecked_27() const { return ___BitReadOnlyChecked_27; }
	inline int32_t* get_address_of_BitReadOnlyChecked_27() { return &___BitReadOnlyChecked_27; }
	inline void set_BitReadOnlyChecked_27(int32_t value)
	{
		___BitReadOnlyChecked_27 = value;
	}

	inline static int32_t get_offset_of_BitAmbientValueQueried_28() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitAmbientValueQueried_28)); }
	inline int32_t get_BitAmbientValueQueried_28() const { return ___BitAmbientValueQueried_28; }
	inline int32_t* get_address_of_BitAmbientValueQueried_28() { return &___BitAmbientValueQueried_28; }
	inline void set_BitAmbientValueQueried_28(int32_t value)
	{
		___BitAmbientValueQueried_28 = value;
	}

	inline static int32_t get_offset_of_BitSetOnDemand_29() { return static_cast<int32_t>(offsetof(ReflectPropertyDescriptor_t589801430_StaticFields, ___BitSetOnDemand_29)); }
	inline int32_t get_BitSetOnDemand_29() const { return ___BitSetOnDemand_29; }
	inline int32_t* get_address_of_BitSetOnDemand_29() { return &___BitSetOnDemand_29; }
	inline void set_BitSetOnDemand_29(int32_t value)
	{
		___BitSetOnDemand_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTPROPERTYDESCRIPTOR_T589801430_H
#ifndef SIDNAMEUSE_T4187601806_H
#define SIDNAMEUSE_T4187601806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Win32EventLog/SidNameUse
struct  SidNameUse_t4187601806 
{
public:
	// System.Int32 System.Diagnostics.Win32EventLog/SidNameUse::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SidNameUse_t4187601806, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIDNAMEUSE_T4187601806_H
#ifndef FORMATMESSAGEFLAGS_T3019286050_H
#define FORMATMESSAGEFLAGS_T3019286050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Win32EventLog/FormatMessageFlags
struct  FormatMessageFlags_t3019286050 
{
public:
	// System.Int32 System.Diagnostics.Win32EventLog/FormatMessageFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatMessageFlags_t3019286050, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATMESSAGEFLAGS_T3019286050_H
#ifndef LOADFLAGS_T335952626_H
#define LOADFLAGS_T335952626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Win32EventLog/LoadFlags
struct  LoadFlags_t335952626 
{
public:
	// System.UInt32 System.Diagnostics.Win32EventLog/LoadFlags::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadFlags_t335952626, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADFLAGS_T335952626_H
#ifndef READFLAGS_T1418975193_H
#define READFLAGS_T1418975193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Win32EventLog/ReadFlags
struct  ReadFlags_t1418975193 
{
public:
	// System.Int32 System.Diagnostics.Win32EventLog/ReadFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReadFlags_t1418975193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READFLAGS_T1418975193_H
#ifndef EDITORBROWSABLESTATE_T4203923524_H
#define EDITORBROWSABLESTATE_T4203923524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t4203923524 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t4203923524, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLESTATE_T4203923524_H
#ifndef WIN32EVENTLOG_T1027389525_H
#define WIN32EVENTLOG_T1027389525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Win32EventLog
struct  Win32EventLog_t1027389525  : public EventLogImpl_t710273496
{
public:
	// System.Threading.ManualResetEvent System.Diagnostics.Win32EventLog::_notifyResetEvent
	ManualResetEvent_t2677195358 * ____notifyResetEvent_1;
	// System.IntPtr System.Diagnostics.Win32EventLog::_readHandle
	intptr_t ____readHandle_2;
	// System.Threading.Thread System.Diagnostics.Win32EventLog::_notifyThread
	Thread_t1403542357 * ____notifyThread_3;
	// System.Int32 System.Diagnostics.Win32EventLog::_lastEntryWritten
	int32_t ____lastEntryWritten_4;
	// System.Object System.Diagnostics.Win32EventLog::_eventLock
	RuntimeObject * ____eventLock_5;

public:
	inline static int32_t get_offset_of__notifyResetEvent_1() { return static_cast<int32_t>(offsetof(Win32EventLog_t1027389525, ____notifyResetEvent_1)); }
	inline ManualResetEvent_t2677195358 * get__notifyResetEvent_1() const { return ____notifyResetEvent_1; }
	inline ManualResetEvent_t2677195358 ** get_address_of__notifyResetEvent_1() { return &____notifyResetEvent_1; }
	inline void set__notifyResetEvent_1(ManualResetEvent_t2677195358 * value)
	{
		____notifyResetEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&____notifyResetEvent_1), value);
	}

	inline static int32_t get_offset_of__readHandle_2() { return static_cast<int32_t>(offsetof(Win32EventLog_t1027389525, ____readHandle_2)); }
	inline intptr_t get__readHandle_2() const { return ____readHandle_2; }
	inline intptr_t* get_address_of__readHandle_2() { return &____readHandle_2; }
	inline void set__readHandle_2(intptr_t value)
	{
		____readHandle_2 = value;
	}

	inline static int32_t get_offset_of__notifyThread_3() { return static_cast<int32_t>(offsetof(Win32EventLog_t1027389525, ____notifyThread_3)); }
	inline Thread_t1403542357 * get__notifyThread_3() const { return ____notifyThread_3; }
	inline Thread_t1403542357 ** get_address_of__notifyThread_3() { return &____notifyThread_3; }
	inline void set__notifyThread_3(Thread_t1403542357 * value)
	{
		____notifyThread_3 = value;
		Il2CppCodeGenWriteBarrier((&____notifyThread_3), value);
	}

	inline static int32_t get_offset_of__lastEntryWritten_4() { return static_cast<int32_t>(offsetof(Win32EventLog_t1027389525, ____lastEntryWritten_4)); }
	inline int32_t get__lastEntryWritten_4() const { return ____lastEntryWritten_4; }
	inline int32_t* get_address_of__lastEntryWritten_4() { return &____lastEntryWritten_4; }
	inline void set__lastEntryWritten_4(int32_t value)
	{
		____lastEntryWritten_4 = value;
	}

	inline static int32_t get_offset_of__eventLock_5() { return static_cast<int32_t>(offsetof(Win32EventLog_t1027389525, ____eventLock_5)); }
	inline RuntimeObject * get__eventLock_5() const { return ____eventLock_5; }
	inline RuntimeObject ** get_address_of__eventLock_5() { return &____eventLock_5; }
	inline void set__eventLock_5(RuntimeObject * value)
	{
		____eventLock_5 = value;
		Il2CppCodeGenWriteBarrier((&____eventLock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EVENTLOG_T1027389525_H
#ifndef LISTCHANGEDTYPE_T1402421622_H
#define LISTCHANGEDTYPE_T1402421622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedType
struct  ListChangedType_t1402421622 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ListChangedType_t1402421622, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDTYPE_T1402421622_H
#ifndef EXTENDEDPROPERTYDESCRIPTOR_T2593292092_H
#define EXTENDEDPROPERTYDESCRIPTOR_T2593292092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExtendedPropertyDescriptor
struct  ExtendedPropertyDescriptor_t2593292092  : public PropertyDescriptor_t3696739850
{
public:
	// System.ComponentModel.ReflectPropertyDescriptor System.ComponentModel.ExtendedPropertyDescriptor::extenderInfo
	ReflectPropertyDescriptor_t589801430 * ___extenderInfo_16;
	// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtendedPropertyDescriptor::provider
	RuntimeObject* ___provider_17;

public:
	inline static int32_t get_offset_of_extenderInfo_16() { return static_cast<int32_t>(offsetof(ExtendedPropertyDescriptor_t2593292092, ___extenderInfo_16)); }
	inline ReflectPropertyDescriptor_t589801430 * get_extenderInfo_16() const { return ___extenderInfo_16; }
	inline ReflectPropertyDescriptor_t589801430 ** get_address_of_extenderInfo_16() { return &___extenderInfo_16; }
	inline void set_extenderInfo_16(ReflectPropertyDescriptor_t589801430 * value)
	{
		___extenderInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___extenderInfo_16), value);
	}

	inline static int32_t get_offset_of_provider_17() { return static_cast<int32_t>(offsetof(ExtendedPropertyDescriptor_t2593292092, ___provider_17)); }
	inline RuntimeObject* get_provider_17() const { return ___provider_17; }
	inline RuntimeObject** get_address_of_provider_17() { return &___provider_17; }
	inline void set_provider_17(RuntimeObject* value)
	{
		___provider_17 = value;
		Il2CppCodeGenWriteBarrier((&___provider_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDEDPROPERTYDESCRIPTOR_T2593292092_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T2700883784_H
#define DESIGNERSERIALIZATIONVISIBILITY_T2700883784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t2700883784 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t2700883784, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITY_T2700883784_H
#ifndef DELEGATE_T147835305_H
#define DELEGATE_T147835305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t147835305  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t2547442569 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___data_9)); }
	inline DelegateData_t2547442569 * get_data_9() const { return ___data_9; }
	inline DelegateData_t2547442569 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t2547442569 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t147835305_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t2547442569 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t147835305_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t2547442569 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T147835305_H
#ifndef REFERENCECONVERTER_T439815728_H
#define REFERENCECONVERTER_T439815728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t439815728  : public TypeConverter_t96354694
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ReferenceConverter_t439815728, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

struct ReferenceConverter_t439815728_StaticFields
{
public:
	// System.String System.ComponentModel.ReferenceConverter::none
	String_t* ___none_2;

public:
	inline static int32_t get_offset_of_none_2() { return static_cast<int32_t>(offsetof(ReferenceConverter_t439815728_StaticFields, ___none_2)); }
	inline String_t* get_none_2() const { return ___none_2; }
	inline String_t** get_address_of_none_2() { return &___none_2; }
	inline void set_none_2(String_t* value)
	{
		___none_2 = value;
		Il2CppCodeGenWriteBarrier((&___none_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T439815728_H
#ifndef ENUMCONVERTER_T1994218356_H
#define ENUMCONVERTER_T1994218356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1994218356  : public TypeConverter_t96354694
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::values
	StandardValuesCollection_t1627904660 * ___values_2;
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(EnumConverter_t1994218356, ___values_2)); }
	inline StandardValuesCollection_t1627904660 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t1627904660 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t1627904660 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(EnumConverter_t1994218356, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T1994218356_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T597245000_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T597245000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t597245000  : public Attribute_t1602879233
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_4;

public:
	inline static int32_t get_offset_of_visibility_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t597245000, ___visibility_4)); }
	inline int32_t get_visibility_4() const { return ___visibility_4; }
	inline int32_t* get_address_of_visibility_4() { return &___visibility_4; }
	inline void set_visibility_4(int32_t value)
	{
		___visibility_4 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t597245000_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t597245000 * ___Content_0;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t597245000 * ___Hidden_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t597245000 * ___Visible_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t597245000 * ___Default_3;

public:
	inline static int32_t get_offset_of_Content_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t597245000_StaticFields, ___Content_0)); }
	inline DesignerSerializationVisibilityAttribute_t597245000 * get_Content_0() const { return ___Content_0; }
	inline DesignerSerializationVisibilityAttribute_t597245000 ** get_address_of_Content_0() { return &___Content_0; }
	inline void set_Content_0(DesignerSerializationVisibilityAttribute_t597245000 * value)
	{
		___Content_0 = value;
		Il2CppCodeGenWriteBarrier((&___Content_0), value);
	}

	inline static int32_t get_offset_of_Hidden_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t597245000_StaticFields, ___Hidden_1)); }
	inline DesignerSerializationVisibilityAttribute_t597245000 * get_Hidden_1() const { return ___Hidden_1; }
	inline DesignerSerializationVisibilityAttribute_t597245000 ** get_address_of_Hidden_1() { return &___Hidden_1; }
	inline void set_Hidden_1(DesignerSerializationVisibilityAttribute_t597245000 * value)
	{
		___Hidden_1 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_1), value);
	}

	inline static int32_t get_offset_of_Visible_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t597245000_StaticFields, ___Visible_2)); }
	inline DesignerSerializationVisibilityAttribute_t597245000 * get_Visible_2() const { return ___Visible_2; }
	inline DesignerSerializationVisibilityAttribute_t597245000 ** get_address_of_Visible_2() { return &___Visible_2; }
	inline void set_Visible_2(DesignerSerializationVisibilityAttribute_t597245000 * value)
	{
		___Visible_2 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t597245000_StaticFields, ___Default_3)); }
	inline DesignerSerializationVisibilityAttribute_t597245000 * get_Default_3() const { return ___Default_3; }
	inline DesignerSerializationVisibilityAttribute_t597245000 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignerSerializationVisibilityAttribute_t597245000 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T597245000_H
#ifndef EXPANDABLEOBJECTCONVERTER_T1602053129_H
#define EXPANDABLEOBJECTCONVERTER_T1602053129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t1602053129  : public TypeConverter_t96354694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T1602053129_H
#ifndef MULTICASTDELEGATE_T225745329_H
#define MULTICASTDELEGATE_T225745329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t225745329  : public Delegate_t147835305
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1919448468* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t225745329, ___delegates_11)); }
	inline DelegateU5BU5D_t1919448468* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1919448468** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1919448468* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t225745329_marshaled_pinvoke : public Delegate_t147835305_marshaled_pinvoke
{
	DelegateU5BU5D_t1919448468* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t225745329_marshaled_com : public Delegate_t147835305_marshaled_com
{
	DelegateU5BU5D_t1919448468* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T225745329_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T3720419618_H
#define ARRAYPROPERTYDESCRIPTOR_T3720419618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t3720419618  : public SimplePropertyDescriptor_t2096068728
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_18;

public:
	inline static int32_t get_offset_of_index_18() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t3720419618, ___index_18)); }
	inline int32_t get_index_18() const { return ___index_18; }
	inline int32_t* get_address_of_index_18() { return &___index_18; }
	inline void set_index_18(int32_t value)
	{
		___index_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYPROPERTYDESCRIPTOR_T3720419618_H
#ifndef GUIDCONVERTER_T1639106167_H
#define GUIDCONVERTER_T1639106167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t1639106167  : public TypeConverter_t96354694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T1639106167_H
#ifndef BASENUMBERCONVERTER_T2427164273_H
#define BASENUMBERCONVERTER_T2427164273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t2427164273  : public TypeConverter_t96354694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T2427164273_H
#ifndef BOOLEANCONVERTER_T1352101945_H
#define BOOLEANCONVERTER_T1352101945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t1352101945  : public TypeConverter_t96354694
{
public:

public:
};

struct BooleanConverter_t1352101945_StaticFields
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.BooleanConverter::values
	StandardValuesCollection_t1627904660 * ___values_2;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(BooleanConverter_t1352101945_StaticFields, ___values_2)); }
	inline StandardValuesCollection_t1627904660 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t1627904660 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t1627904660 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T1352101945_H
#ifndef CHARCONVERTER_T1699335084_H
#define CHARCONVERTER_T1699335084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t1699335084  : public TypeConverter_t96354694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T1699335084_H
#ifndef COLLECTIONCONVERTER_T2468844635_H
#define COLLECTIONCONVERTER_T2468844635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t2468844635  : public TypeConverter_t96354694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T2468844635_H
#ifndef NULLABLECONVERTER_T1926355933_H
#define NULLABLECONVERTER_T1926355933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t1926355933  : public TypeConverter_t96354694
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_2;
	// System.Type System.ComponentModel.NullableConverter::simpleType
	Type_t * ___simpleType_3;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::simpleTypeConverter
	TypeConverter_t96354694 * ___simpleTypeConverter_4;

public:
	inline static int32_t get_offset_of_nullableType_2() { return static_cast<int32_t>(offsetof(NullableConverter_t1926355933, ___nullableType_2)); }
	inline Type_t * get_nullableType_2() const { return ___nullableType_2; }
	inline Type_t ** get_address_of_nullableType_2() { return &___nullableType_2; }
	inline void set_nullableType_2(Type_t * value)
	{
		___nullableType_2 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_2), value);
	}

	inline static int32_t get_offset_of_simpleType_3() { return static_cast<int32_t>(offsetof(NullableConverter_t1926355933, ___simpleType_3)); }
	inline Type_t * get_simpleType_3() const { return ___simpleType_3; }
	inline Type_t ** get_address_of_simpleType_3() { return &___simpleType_3; }
	inline void set_simpleType_3(Type_t * value)
	{
		___simpleType_3 = value;
		Il2CppCodeGenWriteBarrier((&___simpleType_3), value);
	}

	inline static int32_t get_offset_of_simpleTypeConverter_4() { return static_cast<int32_t>(offsetof(NullableConverter_t1926355933, ___simpleTypeConverter_4)); }
	inline TypeConverter_t96354694 * get_simpleTypeConverter_4() const { return ___simpleTypeConverter_4; }
	inline TypeConverter_t96354694 ** get_address_of_simpleTypeConverter_4() { return &___simpleTypeConverter_4; }
	inline void set_simpleTypeConverter_4(TypeConverter_t96354694 * value)
	{
		___simpleTypeConverter_4 = value;
		Il2CppCodeGenWriteBarrier((&___simpleTypeConverter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T1926355933_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T4225971889_H
#define INVALIDENUMARGUMENTEXCEPTION_T4225971889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t4225971889  : public ArgumentException_t4229326037
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T4225971889_H
#ifndef EDITORBROWSABLEATTRIBUTE_T158744956_H
#define EDITORBROWSABLEATTRIBUTE_T158744956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t158744956  : public Attribute_t1602879233
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::browsableState
	int32_t ___browsableState_0;

public:
	inline static int32_t get_offset_of_browsableState_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t158744956, ___browsableState_0)); }
	inline int32_t get_browsableState_0() const { return ___browsableState_0; }
	inline int32_t* get_address_of_browsableState_0() { return &___browsableState_0; }
	inline void set_browsableState_0(int32_t value)
	{
		___browsableState_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T158744956_H
#ifndef DATETIMEOFFSETCONVERTER_T2684015329_H
#define DATETIMEOFFSETCONVERTER_T2684015329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeOffsetConverter
struct  DateTimeOffsetConverter_t2684015329  : public TypeConverter_t96354694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSETCONVERTER_T2684015329_H
#ifndef LISTCHANGEDEVENTARGS_T1660666884_H
#define LISTCHANGEDEVENTARGS_T1660666884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t1660666884  : public EventArgs_t3429579474
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::listChangedType
	int32_t ___listChangedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_3;

public:
	inline static int32_t get_offset_of_listChangedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1660666884, ___listChangedType_1)); }
	inline int32_t get_listChangedType_1() const { return ___listChangedType_1; }
	inline int32_t* get_address_of_listChangedType_1() { return &___listChangedType_1; }
	inline void set_listChangedType_1(int32_t value)
	{
		___listChangedType_1 = value;
	}

	inline static int32_t get_offset_of_newIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1660666884, ___newIndex_2)); }
	inline int32_t get_newIndex_2() const { return ___newIndex_2; }
	inline int32_t* get_address_of_newIndex_2() { return &___newIndex_2; }
	inline void set_newIndex_2(int32_t value)
	{
		___newIndex_2 = value;
	}

	inline static int32_t get_offset_of_oldIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t1660666884, ___oldIndex_3)); }
	inline int32_t get_oldIndex_3() const { return ___oldIndex_3; }
	inline int32_t* get_address_of_oldIndex_3() { return &___oldIndex_3; }
	inline void set_oldIndex_3(int32_t value)
	{
		___oldIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTARGS_T1660666884_H
#ifndef TIMESPANCONVERTER_T2896886543_H
#define TIMESPANCONVERTER_T2896886543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t2896886543  : public TypeConverter_t96354694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T2896886543_H
#ifndef STRINGCONVERTER_T1015421357_H
#define STRINGCONVERTER_T1015421357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t1015421357  : public TypeConverter_t96354694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T1015421357_H
#ifndef CULTUREINFOCONVERTER_T311921935_H
#define CULTUREINFOCONVERTER_T311921935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t311921935  : public TypeConverter_t96354694
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::values
	StandardValuesCollection_t1627904660 * ___values_2;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t311921935, ___values_2)); }
	inline StandardValuesCollection_t1627904660 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t1627904660 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t1627904660 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T311921935_H
#ifndef DATETIMECONVERTER_T3264131969_H
#define DATETIMECONVERTER_T3264131969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t3264131969  : public TypeConverter_t96354694
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T3264131969_H
#ifndef COMPONENTCONVERTER_T2747270742_H
#define COMPONENTCONVERTER_T2747270742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t2747270742  : public ReferenceConverter_t439815728
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T2747270742_H
#ifndef DOUBLECONVERTER_T2886919658_H
#define DOUBLECONVERTER_T2886919658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t2886919658  : public BaseNumberConverter_t2427164273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T2886919658_H
#ifndef LISTCHANGEDEVENTHANDLER_T2800791423_H
#define LISTCHANGEDEVENTHANDLER_T2800791423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventHandler
struct  ListChangedEventHandler_t2800791423  : public MulticastDelegate_t225745329
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTHANDLER_T2800791423_H
#ifndef REFRESHEVENTHANDLER_T1373868790_H
#define REFRESHEVENTHANDLER_T1373868790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventHandler
struct  RefreshEventHandler_t1373868790  : public MulticastDelegate_t225745329
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTHANDLER_T1373868790_H
#ifndef SINGLECONVERTER_T1019856909_H
#define SINGLECONVERTER_T1019856909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t1019856909  : public BaseNumberConverter_t2427164273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T1019856909_H
#ifndef SBYTECONVERTER_T4163790480_H
#define SBYTECONVERTER_T4163790480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t4163790480  : public BaseNumberConverter_t2427164273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T4163790480_H
#ifndef INT16CONVERTER_T1433370089_H
#define INT16CONVERTER_T1433370089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t1433370089  : public BaseNumberConverter_t2427164273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T1433370089_H
#ifndef BYTECONVERTER_T3136100810_H
#define BYTECONVERTER_T3136100810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t3136100810  : public BaseNumberConverter_t2427164273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T3136100810_H
#ifndef PROPERTYCHANGEDEVENTHANDLER_T2161153279_H
#define PROPERTYCHANGEDEVENTHANDLER_T2161153279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventHandler
struct  PropertyChangedEventHandler_t2161153279  : public MulticastDelegate_t225745329
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTHANDLER_T2161153279_H
#ifndef INT32CONVERTER_T2150015976_H
#define INT32CONVERTER_T2150015976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t2150015976  : public BaseNumberConverter_t2427164273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T2150015976_H
#ifndef INT64CONVERTER_T197250299_H
#define INT64CONVERTER_T197250299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t197250299  : public BaseNumberConverter_t2427164273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T197250299_H
#ifndef ARRAYCONVERTER_T1343859515_H
#define ARRAYCONVERTER_T1343859515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t1343859515  : public CollectionConverter_t2468844635
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T1343859515_H
#ifndef DECIMALCONVERTER_T1354944937_H
#define DECIMALCONVERTER_T1354944937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t1354944937  : public BaseNumberConverter_t2427164273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T1354944937_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2700 = { sizeof (Win32EventLog_t1027389525), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2700[5] = 
{
	Win32EventLog_t1027389525::get_offset_of__notifyResetEvent_1(),
	Win32EventLog_t1027389525::get_offset_of__readHandle_2(),
	Win32EventLog_t1027389525::get_offset_of__notifyThread_3(),
	Win32EventLog_t1027389525::get_offset_of__lastEntryWritten_4(),
	Win32EventLog_t1027389525::get_offset_of__eventLock_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2701 = { sizeof (PInvoke_t1109261675), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2702 = { sizeof (ReadFlags_t1418975193)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2702[5] = 
{
	ReadFlags_t1418975193::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2703 = { sizeof (LoadFlags_t335952626)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2703[2] = 
{
	LoadFlags_t335952626::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2704 = { sizeof (FormatMessageFlags_t3019286050)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2704[6] = 
{
	FormatMessageFlags_t3019286050::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2705 = { sizeof (SidNameUse_t4187601806)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2705[10] = 
{
	SidNameUse_t4187601806::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2706 = { sizeof (ExcludeFromCodeCoverageAttribute_t3581692502), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2707 = { sizeof (ArrayConverter_t1343859515), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2708 = { sizeof (ArrayPropertyDescriptor_t3720419618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2708[1] = 
{
	ArrayPropertyDescriptor_t3720419618::get_offset_of_index_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2709 = { sizeof (ArraySubsetEnumerator_t651831097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2709[3] = 
{
	ArraySubsetEnumerator_t651831097::get_offset_of_array_0(),
	ArraySubsetEnumerator_t651831097::get_offset_of_total_1(),
	ArraySubsetEnumerator_t651831097::get_offset_of_current_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2710 = { sizeof (AttributeCollection_t2008225883), -1, sizeof(AttributeCollection_t2008225883_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2710[6] = 
{
	AttributeCollection_t2008225883_StaticFields::get_offset_of_Empty_0(),
	AttributeCollection_t2008225883_StaticFields::get_offset_of__defaultAttributes_1(),
	AttributeCollection_t2008225883::get_offset_of__attributes_2(),
	AttributeCollection_t2008225883_StaticFields::get_offset_of_internalSyncObject_3(),
	AttributeCollection_t2008225883::get_offset_of__foundAttributeTypes_4(),
	AttributeCollection_t2008225883::get_offset_of__index_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2711 = { sizeof (AttributeEntry_t1439066719)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2711[2] = 
{
	AttributeEntry_t1439066719::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AttributeEntry_t1439066719::get_offset_of_index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2712 = { sizeof (AttributeProviderAttribute_t1695167744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2712[2] = 
{
	AttributeProviderAttribute_t1695167744::get_offset_of__typeName_0(),
	AttributeProviderAttribute_t1695167744::get_offset_of__propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2713 = { sizeof (BooleanConverter_t1352101945), -1, sizeof(BooleanConverter_t1352101945_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2713[1] = 
{
	BooleanConverter_t1352101945_StaticFields::get_offset_of_values_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2714 = { sizeof (BrowsableAttribute_t1785650251), -1, sizeof(BrowsableAttribute_t1785650251_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2714[4] = 
{
	BrowsableAttribute_t1785650251_StaticFields::get_offset_of_Yes_0(),
	BrowsableAttribute_t1785650251_StaticFields::get_offset_of_No_1(),
	BrowsableAttribute_t1785650251_StaticFields::get_offset_of_Default_2(),
	BrowsableAttribute_t1785650251::get_offset_of_browsable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2715 = { sizeof (ByteConverter_t3136100810), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2716 = { sizeof (CharConverter_t1699335084), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2717 = { sizeof (CollectionConverter_t2468844635), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2718 = { sizeof (Component_t474650112), -1, sizeof(Component_t474650112_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2718[3] = 
{
	Component_t474650112_StaticFields::get_offset_of_EventDisposed_1(),
	Component_t474650112::get_offset_of_site_2(),
	Component_t474650112::get_offset_of_events_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2719 = { sizeof (ComponentCollection_t1566145613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2720 = { sizeof (ComponentConverter_t2747270742), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2721 = { sizeof (CultureInfoConverter_t311921935), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2721[1] = 
{
	CultureInfoConverter_t311921935::get_offset_of_values_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2722 = { sizeof (CultureComparer_t3702718181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2722[1] = 
{
	CultureComparer_t3702718181::get_offset_of_converter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2723 = { sizeof (CultureInfoMapper_t1836859149), -1, sizeof(CultureInfoMapper_t1836859149_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2723[1] = 
{
	CultureInfoMapper_t1836859149_StaticFields::get_offset_of_cultureInfoNameMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2724 = { sizeof (CustomTypeDescriptor_t2177202805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2724[1] = 
{
	CustomTypeDescriptor_t2177202805::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2725 = { sizeof (DateTimeConverter_t3264131969), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2726 = { sizeof (DateTimeOffsetConverter_t2684015329), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2727 = { sizeof (DecimalConverter_t1354944937), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2728 = { sizeof (DefaultEventAttribute_t3371076816), -1, sizeof(DefaultEventAttribute_t3371076816_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2728[2] = 
{
	DefaultEventAttribute_t3371076816::get_offset_of_name_0(),
	DefaultEventAttribute_t3371076816_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2729 = { sizeof (DefaultPropertyAttribute_t1588096197), -1, sizeof(DefaultPropertyAttribute_t1588096197_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2729[2] = 
{
	DefaultPropertyAttribute_t1588096197::get_offset_of_name_0(),
	DefaultPropertyAttribute_t1588096197_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2730 = { sizeof (DefaultValueAttribute_t3090176339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2730[1] = 
{
	DefaultValueAttribute_t3090176339::get_offset_of_value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2731 = { sizeof (DelegatingTypeDescriptionProvider_t571437091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2731[1] = 
{
	DelegatingTypeDescriptionProvider_t571437091::get_offset_of__type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2732 = { sizeof (DescriptionAttribute_t2940155393), -1, sizeof(DescriptionAttribute_t2940155393_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2732[2] = 
{
	DescriptionAttribute_t2940155393_StaticFields::get_offset_of_Default_0(),
	DescriptionAttribute_t2940155393::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2733 = { sizeof (DesignOnlyAttribute_t3936029912), -1, sizeof(DesignOnlyAttribute_t3936029912_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2733[4] = 
{
	DesignOnlyAttribute_t3936029912::get_offset_of_isDesignOnly_0(),
	DesignOnlyAttribute_t3936029912_StaticFields::get_offset_of_Yes_1(),
	DesignOnlyAttribute_t3936029912_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t3936029912_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2734 = { sizeof (DesignTimeVisibleAttribute_t2949062810), -1, sizeof(DesignTimeVisibleAttribute_t2949062810_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2734[4] = 
{
	DesignTimeVisibleAttribute_t2949062810::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t2949062810_StaticFields::get_offset_of_Yes_1(),
	DesignTimeVisibleAttribute_t2949062810_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t2949062810_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2735 = { sizeof (DesignerAttribute_t2863989512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2735[3] = 
{
	DesignerAttribute_t2863989512::get_offset_of_designerTypeName_0(),
	DesignerAttribute_t2863989512::get_offset_of_designerBaseTypeName_1(),
	DesignerAttribute_t2863989512::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2736 = { sizeof (DesignerCategoryAttribute_t2356304537), -1, sizeof(DesignerCategoryAttribute_t2356304537_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2736[6] = 
{
	DesignerCategoryAttribute_t2356304537::get_offset_of_category_0(),
	DesignerCategoryAttribute_t2356304537::get_offset_of_typeId_1(),
	DesignerCategoryAttribute_t2356304537_StaticFields::get_offset_of_Component_2(),
	DesignerCategoryAttribute_t2356304537_StaticFields::get_offset_of_Default_3(),
	DesignerCategoryAttribute_t2356304537_StaticFields::get_offset_of_Form_4(),
	DesignerCategoryAttribute_t2356304537_StaticFields::get_offset_of_Generic_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2737 = { sizeof (DesignerSerializationVisibility_t2700883784)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2737[4] = 
{
	DesignerSerializationVisibility_t2700883784::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2738 = { sizeof (DesignerSerializationVisibilityAttribute_t597245000), -1, sizeof(DesignerSerializationVisibilityAttribute_t597245000_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2738[5] = 
{
	DesignerSerializationVisibilityAttribute_t597245000_StaticFields::get_offset_of_Content_0(),
	DesignerSerializationVisibilityAttribute_t597245000_StaticFields::get_offset_of_Hidden_1(),
	DesignerSerializationVisibilityAttribute_t597245000_StaticFields::get_offset_of_Visible_2(),
	DesignerSerializationVisibilityAttribute_t597245000_StaticFields::get_offset_of_Default_3(),
	DesignerSerializationVisibilityAttribute_t597245000::get_offset_of_visibility_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2739 = { sizeof (DisplayNameAttribute_t1434268835), -1, sizeof(DisplayNameAttribute_t1434268835_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2739[2] = 
{
	DisplayNameAttribute_t1434268835_StaticFields::get_offset_of_Default_0(),
	DisplayNameAttribute_t1434268835::get_offset_of__displayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2740 = { sizeof (DoubleConverter_t2886919658), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2741 = { sizeof (EditorAttribute_t1183279190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2741[3] = 
{
	EditorAttribute_t1183279190::get_offset_of_baseTypeName_0(),
	EditorAttribute_t1183279190::get_offset_of_typeName_1(),
	EditorAttribute_t1183279190::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2742 = { sizeof (EditorBrowsableAttribute_t158744956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2742[1] = 
{
	EditorBrowsableAttribute_t158744956::get_offset_of_browsableState_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2743 = { sizeof (EditorBrowsableState_t4203923524)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2743[4] = 
{
	EditorBrowsableState_t4203923524::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2744 = { sizeof (EnumConverter_t1994218356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2744[2] = 
{
	EnumConverter_t1994218356::get_offset_of_values_2(),
	EnumConverter_t1994218356::get_offset_of_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2745 = { sizeof (EventDescriptor_t2758958715), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2746 = { sizeof (EventDescriptorCollection_t4155396759), -1, sizeof(EventDescriptorCollection_t4155396759_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2746[8] = 
{
	EventDescriptorCollection_t4155396759::get_offset_of_events_0(),
	EventDescriptorCollection_t4155396759::get_offset_of_namedSort_1(),
	EventDescriptorCollection_t4155396759::get_offset_of_comparer_2(),
	EventDescriptorCollection_t4155396759::get_offset_of_eventsOwned_3(),
	EventDescriptorCollection_t4155396759::get_offset_of_needSort_4(),
	EventDescriptorCollection_t4155396759::get_offset_of_eventCount_5(),
	EventDescriptorCollection_t4155396759::get_offset_of_readOnly_6(),
	EventDescriptorCollection_t4155396759_StaticFields::get_offset_of_Empty_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2747 = { sizeof (EventHandlerList_t1510572673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2747[2] = 
{
	EventHandlerList_t1510572673::get_offset_of_head_0(),
	EventHandlerList_t1510572673::get_offset_of_parent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2748 = { sizeof (ListEntry_t2616800125), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2748[3] = 
{
	ListEntry_t2616800125::get_offset_of_next_0(),
	ListEntry_t2616800125::get_offset_of_key_1(),
	ListEntry_t2616800125::get_offset_of_handler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2749 = { sizeof (ExpandableObjectConverter_t1602053129), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2750 = { sizeof (ExtendedPropertyDescriptor_t2593292092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2750[2] = 
{
	ExtendedPropertyDescriptor_t2593292092::get_offset_of_extenderInfo_16(),
	ExtendedPropertyDescriptor_t2593292092::get_offset_of_provider_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2751 = { sizeof (ExtenderProvidedPropertyAttribute_t947380105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2751[3] = 
{
	ExtenderProvidedPropertyAttribute_t947380105::get_offset_of_extenderProperty_0(),
	ExtenderProvidedPropertyAttribute_t947380105::get_offset_of_provider_1(),
	ExtenderProvidedPropertyAttribute_t947380105::get_offset_of_receiverType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2752 = { sizeof (GuidConverter_t1639106167), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2753 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2754 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2755 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2756 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2757 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2758 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2759 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2760 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2761 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2762 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2763 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2764 = { sizeof (InstallerTypeAttribute_t1778399479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2764[1] = 
{
	InstallerTypeAttribute_t1778399479::get_offset_of__typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2765 = { sizeof (Int16Converter_t1433370089), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2766 = { sizeof (Int32Converter_t2150015976), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2767 = { sizeof (Int64Converter_t197250299), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2768 = { sizeof (InvalidEnumArgumentException_t4225971889), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2769 = { sizeof (ListChangedEventArgs_t1660666884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2769[3] = 
{
	ListChangedEventArgs_t1660666884::get_offset_of_listChangedType_1(),
	ListChangedEventArgs_t1660666884::get_offset_of_newIndex_2(),
	ListChangedEventArgs_t1660666884::get_offset_of_oldIndex_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2770 = { sizeof (ListChangedEventHandler_t2800791423), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2771 = { sizeof (ListChangedType_t1402421622)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2771[9] = 
{
	ListChangedType_t1402421622::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2772 = { sizeof (MemberDescriptor_t3541007810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2772[12] = 
{
	MemberDescriptor_t3541007810::get_offset_of_name_0(),
	MemberDescriptor_t3541007810::get_offset_of_displayName_1(),
	MemberDescriptor_t3541007810::get_offset_of_nameHash_2(),
	MemberDescriptor_t3541007810::get_offset_of_attributeCollection_3(),
	MemberDescriptor_t3541007810::get_offset_of_attributes_4(),
	MemberDescriptor_t3541007810::get_offset_of_originalAttributes_5(),
	MemberDescriptor_t3541007810::get_offset_of_attributesFiltered_6(),
	MemberDescriptor_t3541007810::get_offset_of_attributesFilled_7(),
	MemberDescriptor_t3541007810::get_offset_of_metadataVersion_8(),
	MemberDescriptor_t3541007810::get_offset_of_category_9(),
	MemberDescriptor_t3541007810::get_offset_of_description_10(),
	MemberDescriptor_t3541007810::get_offset_of_lockCookie_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2773 = { sizeof (NullableConverter_t1926355933), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2773[3] = 
{
	NullableConverter_t1926355933::get_offset_of_nullableType_2(),
	NullableConverter_t1926355933::get_offset_of_simpleType_3(),
	NullableConverter_t1926355933::get_offset_of_simpleTypeConverter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2774 = { sizeof (PropertyChangedEventArgs_t4217552343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2774[1] = 
{
	PropertyChangedEventArgs_t4217552343::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2775 = { sizeof (PropertyChangedEventHandler_t2161153279), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2776 = { sizeof (PropertyDescriptor_t3696739850), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2776[4] = 
{
	PropertyDescriptor_t3696739850::get_offset_of_converter_12(),
	PropertyDescriptor_t3696739850::get_offset_of_editors_13(),
	PropertyDescriptor_t3696739850::get_offset_of_editorTypes_14(),
	PropertyDescriptor_t3696739850::get_offset_of_editorCount_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2777 = { sizeof (PropertyDescriptorCollection_t3337293892), -1, sizeof(PropertyDescriptorCollection_t3337293892_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2777[10] = 
{
	PropertyDescriptorCollection_t3337293892_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t3337293892::get_offset_of_cachedFoundProperties_1(),
	PropertyDescriptorCollection_t3337293892::get_offset_of_cachedIgnoreCase_2(),
	PropertyDescriptorCollection_t3337293892::get_offset_of_properties_3(),
	PropertyDescriptorCollection_t3337293892::get_offset_of_propCount_4(),
	PropertyDescriptorCollection_t3337293892::get_offset_of_namedSort_5(),
	PropertyDescriptorCollection_t3337293892::get_offset_of_comparer_6(),
	PropertyDescriptorCollection_t3337293892::get_offset_of_propsOwned_7(),
	PropertyDescriptorCollection_t3337293892::get_offset_of_needSort_8(),
	PropertyDescriptorCollection_t3337293892::get_offset_of_readOnly_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2778 = { sizeof (PropertyDescriptorEnumerator_t4012622696), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2778[2] = 
{
	PropertyDescriptorEnumerator_t4012622696::get_offset_of_owner_0(),
	PropertyDescriptorEnumerator_t4012622696::get_offset_of_index_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2779 = { sizeof (ProvidePropertyAttribute_t2339437776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2779[2] = 
{
	ProvidePropertyAttribute_t2339437776::get_offset_of_propertyName_0(),
	ProvidePropertyAttribute_t2339437776::get_offset_of_receiverTypeName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2780 = { sizeof (ReadOnlyAttribute_t3240484922), -1, sizeof(ReadOnlyAttribute_t3240484922_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2780[4] = 
{
	ReadOnlyAttribute_t3240484922::get_offset_of_isReadOnly_0(),
	ReadOnlyAttribute_t3240484922_StaticFields::get_offset_of_Yes_1(),
	ReadOnlyAttribute_t3240484922_StaticFields::get_offset_of_No_2(),
	ReadOnlyAttribute_t3240484922_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2781 = { sizeof (RecommendedAsConfigurableAttribute_t3463027901), -1, sizeof(RecommendedAsConfigurableAttribute_t3463027901_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2781[4] = 
{
	RecommendedAsConfigurableAttribute_t3463027901::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t3463027901_StaticFields::get_offset_of_No_1(),
	RecommendedAsConfigurableAttribute_t3463027901_StaticFields::get_offset_of_Yes_2(),
	RecommendedAsConfigurableAttribute_t3463027901_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2782 = { sizeof (ReferenceConverter_t439815728), -1, sizeof(ReferenceConverter_t439815728_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2782[2] = 
{
	ReferenceConverter_t439815728_StaticFields::get_offset_of_none_2(),
	ReferenceConverter_t439815728::get_offset_of_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2783 = { sizeof (ReferenceComparer_t36452528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2783[1] = 
{
	ReferenceComparer_t36452528::get_offset_of_converter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2784 = { sizeof (ReflectPropertyDescriptor_t589801430), -1, sizeof(ReflectPropertyDescriptor_t589801430_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2784[21] = 
{
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_argsNone_16(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_noValue_17(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_PropDescCreateSwitch_18(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_PropDescUsageSwitch_19(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitDefaultValueQueried_20(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitGetQueried_21(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitSetQueried_22(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitShouldSerializeQueried_23(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitResetQueried_24(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitChangedQueried_25(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitIPropChangedQueried_26(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitReadOnlyChecked_27(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitAmbientValueQueried_28(),
	ReflectPropertyDescriptor_t589801430_StaticFields::get_offset_of_BitSetOnDemand_29(),
	ReflectPropertyDescriptor_t589801430::get_offset_of_state_30(),
	ReflectPropertyDescriptor_t589801430::get_offset_of_componentClass_31(),
	ReflectPropertyDescriptor_t589801430::get_offset_of_type_32(),
	ReflectPropertyDescriptor_t589801430::get_offset_of_propInfo_33(),
	ReflectPropertyDescriptor_t589801430::get_offset_of_getMethod_34(),
	ReflectPropertyDescriptor_t589801430::get_offset_of_setMethod_35(),
	ReflectPropertyDescriptor_t589801430::get_offset_of_receiverType_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2785 = { sizeof (ReflectTypeDescriptionProvider_t3800793144), -1, sizeof(ReflectTypeDescriptionProvider_t3800793144_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2785[14] = 
{
	ReflectTypeDescriptionProvider_t3800793144::get_offset_of__typeData_2(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__typeConstructor_3(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__intrinsicTypeConverters_4(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__intrinsicReferenceKey_5(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__intrinsicNullableKey_6(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__dictionaryKey_7(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__propertyCache_8(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__attributeCache_9(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__extendedPropertyCache_10(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__extenderProviderKey_11(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__extenderPropertiesKey_12(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__extenderProviderPropertiesKey_13(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__skipInterfaceAttributeList_14(),
	ReflectTypeDescriptionProvider_t3800793144_StaticFields::get_offset_of__internalSyncObject_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2786 = { sizeof (ReflectedTypeData_t4057409611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2786[8] = 
{
	ReflectedTypeData_t4057409611::get_offset_of__type_0(),
	ReflectedTypeData_t4057409611::get_offset_of__attributes_1(),
	ReflectedTypeData_t4057409611::get_offset_of__events_2(),
	ReflectedTypeData_t4057409611::get_offset_of__properties_3(),
	ReflectedTypeData_t4057409611::get_offset_of__converter_4(),
	ReflectedTypeData_t4057409611::get_offset_of__editors_5(),
	ReflectedTypeData_t4057409611::get_offset_of__editorTypes_6(),
	ReflectedTypeData_t4057409611::get_offset_of__editorCount_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2787 = { sizeof (RefreshEventArgs_t1568420707), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2787[1] = 
{
	RefreshEventArgs_t1568420707::get_offset_of_typeChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2788 = { sizeof (RefreshEventHandler_t1373868790), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2789 = { sizeof (SByteConverter_t4163790480), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2790 = { sizeof (SettingsBindableAttribute_t3935083639), -1, sizeof(SettingsBindableAttribute_t3935083639_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2790[3] = 
{
	SettingsBindableAttribute_t3935083639_StaticFields::get_offset_of_Yes_0(),
	SettingsBindableAttribute_t3935083639_StaticFields::get_offset_of_No_1(),
	SettingsBindableAttribute_t3935083639::get_offset_of__bindable_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2791 = { sizeof (SingleConverter_t1019856909), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2792 = { sizeof (StringConverter_t1015421357), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2793 = { sizeof (TimeSpanConverter_t2896886543), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2794 = { sizeof (TypeConverter_t96354694), -1, sizeof(TypeConverter_t96354694_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2794[2] = 
{
	0,
	TypeConverter_t96354694_StaticFields::get_offset_of_useCompatibleTypeConversion_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2795 = { sizeof (SimplePropertyDescriptor_t2096068728), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2795[2] = 
{
	SimplePropertyDescriptor_t2096068728::get_offset_of_componentType_16(),
	SimplePropertyDescriptor_t2096068728::get_offset_of_propertyType_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2796 = { sizeof (StandardValuesCollection_t1627904660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2796[2] = 
{
	StandardValuesCollection_t1627904660::get_offset_of_values_0(),
	StandardValuesCollection_t1627904660::get_offset_of_valueArray_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2797 = { sizeof (TypeConverterAttribute_t421331380), -1, sizeof(TypeConverterAttribute_t421331380_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2797[2] = 
{
	TypeConverterAttribute_t421331380::get_offset_of_typeName_0(),
	TypeConverterAttribute_t421331380_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2798 = { sizeof (TypeDescriptionProvider_t2136278850), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2798[2] = 
{
	TypeDescriptionProvider_t2136278850::get_offset_of__parent_0(),
	TypeDescriptionProvider_t2136278850::get_offset_of__emptyDescriptor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2799 = { sizeof (EmptyCustomTypeDescriptor_t2894271836), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif