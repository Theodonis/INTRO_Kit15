<<<<<<< HEAD
<<<<<<< HEAD
/**
 * \file
 * \brief Interface to the line following module
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This is the interface to line following module.
 */

#ifndef LINEFOLLOW_H_
#define LINEFOLLOW_H_

#include "Platform.h"
#if PL_CONFIG_HAS_LINE_FOLLOW

#if PL_CONFIG_HAS_SHELL
#include "CLS1.h"

/*!
 * \brief Module command line parser
 * \param cmd Pointer to command string to be parsed
 * \param handled Set to TRUE if command has handled by parser
 * \param io Shell standard I/O handler
 * \return Error code, ERR_OK if everything was ok
 */
uint8_t LF_ParseCommand(const unsigned char *cmd, bool *handled, const CLS1_StdIOType *io);
#endif

/*!
 * \brief Start line following
 */
void LF_StartFollowing(void);

/*!
 * \brief Stop line following
 */
void LF_StopFollowing(void);

/*!
 * \brief Start/stop line following
 */
void LF_StartStopFollowing(void);

/*!
 * \brief Function to determine if line following is active
 * \return TRUE if currently line following, FALSE otherwise
 */
bool LF_IsFollowing(void);

/*!
 * \brief Module initialization.
 */
void LF_Init(void);

/*!
 * \brief Module de-initialization.
 */
void LF_Deinit(void);

#endif /* PL_CONFIG_HAS_LINE_FOLLOW */

#endif /* LINEFOLLOW_H_ */
=======
/**
 * \file
 * \brief Interface to the line following module
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This is the interface to line following module.
 */

#ifndef LINEFOLLOW_H_
#define LINEFOLLOW_H_

#include "Platform.h"
#if PL_CONFIG_HAS_LINE_FOLLOW

#if PL_CONFIG_HAS_SHELL
#include "CLS1.h"

/*!
 * \brief Module command line parser
 * \param cmd Pointer to command string to be parsed
 * \param handled Set to TRUE if command has handled by parser
 * \param io Shell standard I/O handler
 * \return Error code, ERR_OK if everything was ok
 */
uint8_t LF_ParseCommand(const unsigned char *cmd, bool *handled, const CLS1_StdIOType *io);
#endif

/*!
 * \brief Start line following
 */
void LF_StartFollowing(void);

/*!
 * \brief Stop line following
 */
void LF_StopFollowing(void);

/*!
 * \brief Start/stop line following
 */
void LF_StartStopFollowing(void);

/*!
 * \brief Function to determine if line following is active
 * \return TRUE if currently line following, FALSE otherwise
 */
bool LF_IsFollowing(void);

/*!
 * \brief Module initialization.
 */
void LF_Init(void);

/*!
 * \brief Module de-initialization.
 */
void LF_Deinit(void);

#endif /* PL_CONFIG_HAS_LINE_FOLLOW */

#endif /* LINEFOLLOW_H_ */
>>>>>>> 0017e4b2604695de8388f95d077525bce50dad25
=======
/**
 * \file
 * \brief Interface to the line following module
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This is the interface to line following module.
 */

#ifndef LINEFOLLOW_H_
#define LINEFOLLOW_H_

#include "Platform.h"
#if PL_CONFIG_HAS_LINE_FOLLOW

#if PL_CONFIG_HAS_SHELL
#include "CLS1.h"

/*!
 * \brief Module command line parser
 * \param cmd Pointer to command string to be parsed
 * \param handled Set to TRUE if command has handled by parser
 * \param io Shell standard I/O handler
 * \return Error code, ERR_OK if everything was ok
 */
uint8_t LF_ParseCommand(const unsigned char *cmd, bool *handled, const CLS1_StdIOType *io);
#endif

/*!
 * \brief Start line following
 */
void LF_StartFollowing(void);

/*!
 * \brief Stop line following
 */
void LF_StopFollowing(void);

/*!
 * \brief Start/stop line following
 */
void LF_StartStopFollowing(void);

/*!
 * \brief Function to determine if line following is active
 * \return TRUE if currently line following, FALSE otherwise
 */
bool LF_IsFollowing(void);

/*!
 * \brief Module initialization.
 */
void LF_Init(void);

/*!
 * \brief Module de-initialization.
 */
void LF_Deinit(void);

#endif /* PL_CONFIG_HAS_LINE_FOLLOW */

#endif /* LINEFOLLOW_H_ */
>>>>>>> 0017e4b2604695de8388f95d077525bce50dad25
