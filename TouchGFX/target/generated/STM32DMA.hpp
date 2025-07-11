/**
  ******************************************************************************
  * File Name          : STM32DMA.hpp
  ******************************************************************************
  * This file is generated by TouchGFX Generator 4.24.0. Please, do not edit!
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
#ifndef STM32DMA_HPP
#define STM32DMA_HPP

#include <touchgfx/hal/BlitOp.hpp>
#include <touchgfx/hal/DMA.hpp>

/**
 * @class STM32DMA
 *
 * @brief This class specializes DMA_Interface for the STM32 processors.
 *
 * @see touchgfx::DMA_Interface
 */
class STM32DMA : public touchgfx::DMA_Interface
{
public:
    /**
     * @fn STM32DMA::STM32DMA();
     *
     * @brief Default constructor.
     */
    STM32DMA();

    /**
     * @fn touchgfx::BlitOperations STM32DMA::getBlitCaps();
     *
     * @brief No blit operations supported by this DMA implementation.
     *
     * @return Zero (no blit ops supported).
     */
    virtual touchgfx::BlitOperations getBlitCaps();

    /**
     * @fn virtual void STM32DMA::setupDataCopy(const touchgfx::BlitOp& blitOp);
     *
     * @brief Asserts if used.
     *
     * @param  blitOp The blit operation to be performed by this DMA instance.
     */
    virtual void setupDataCopy(const touchgfx::BlitOp& blitOp);

    /**
     * @fn virtual void STM32DMA::setupDataFill(const touchgfx::BlitOp& blitOp);
     *
     * @brief Asserts if used.
     *
     * @param  blitOp The blit operation to be performed by this DMA instance.
     */
    virtual void setupDataFill(const touchgfx::BlitOp& blitOp);

    /**
     * @fn virtual void STM32DMA::signalDMAInterrupt();
     *
     * @brief Does nothing.
     */
    virtual void signalDMAInterrupt()
    {
    }

    /**
     * @fn virtual void STM32DMA::flush();
     *
     * @brief Block until all DMA transfers are complete. Since this particular DMA does not do
     * anything, return immediately.
     */
    virtual void flush()
    {
    }

private:
    touchgfx::LockFreeDMA_Queue q;
    touchgfx::BlitOp b;
};
#endif // TOUCHGFX_NODMA_HPP

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
