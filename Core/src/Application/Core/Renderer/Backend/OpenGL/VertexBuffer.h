#pragma once

namespace Project {

	class VertexBuffer
	{
	public:
		VertexBuffer();
		~VertexBuffer();

		void Bind() const;
		void Unbind() const;
	private:
		unsigned int m_RendererID;
	};

}