/// @file    sces-threadx.h
/// @brief   SCES ThreadX OS Abstraction Layer Header
/// @details This configuration header file defines the OS abstraction layer for
///          SCES using the ThreadX RTOS as the underlying operating system.
///          It includes necessary type definitions and constants required for
///          the SCES OS abstraction layer implementation.
/// @author  Khose-ie<khose-ie@outlook.com>
/// @date    2024-06-10

#ifndef __SCES_THREADX_H__
#define __SCES_THREADX_H__

/// @brief Size of the OS stack memory zone
/// @details This constant defines the size (in bytes) of the memory zone
///          allocated for the OS stack byte pool.
///          If you always use static stack allocation APIs, you can reduce this size
///          to save memory due to only management blocks are allocated from this pool.
#define SCES_OS_STACK_SIZE (1024 * 60)

/// @brief Declaration of external the OS stack pool
/// @details This macro declares an external byte array that serves as the
///          memory pool for the OS stack byte pool.
///     If the EX_OS_STACK_POOL macro is not defined, a static byte pool will be created.
// #define EX_OS_STACK_POOL (os_stack)

/// @brief Declaration of the external OS stack memory zone
/// @details This macro declares an external byte array that serves as the
///          memory zone for the OS stack byte pool.
///     If the EX_OS_STACK_MEM_ZONE macro is not defined, a static array will be created.
// #define EX_OS_STACK_MEM_ZONE (os_stack_zone)

#endif // __SCES_THREADX_H__
