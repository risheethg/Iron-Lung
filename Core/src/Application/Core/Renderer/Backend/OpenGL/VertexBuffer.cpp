#include "pch.h"
#include "VertexBuffer.h"

namespace Project {

	VertexBuffer::VertexBuffer() {
		glGenVertexArrays(1, &m_RendererID);
	}

	VertexBuffer::~VertexBuffer() {
		glBindVertexArray(0);
	}

	void VertexBuffer::Bind() const {
		glBindVertexArray(m_RendererID);
	}

	void VertexBuffer::Unbind() const {
		glBindVertexArray(0);
	}
}
