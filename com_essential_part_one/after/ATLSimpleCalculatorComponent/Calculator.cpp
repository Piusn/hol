#pragma once
#include "pch.h"

#include "Calculator.h"

STDMETHODIMP CCalculator::Add(int a, int b, int * result) {
	*result = a + b;

	return S_OK;
}