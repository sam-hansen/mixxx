#pragma once

#include <vector>
#include <QLineF>

#include "util/class.h"
#include "waveform/renderers/waveformrenderersignalbase.h"

class WaveformRendererFilteredSignal : public WaveformRendererSignalBase {
  public:
    explicit WaveformRendererFilteredSignal(
            WaveformWidgetRenderer* waveformWidget, ::WaveformRendererSignalBase::Options options);
    virtual ~WaveformRendererFilteredSignal();

    virtual void onSetup(const QDomNode& node);

    virtual void draw(QPainter* painter, QPaintEvent* event);

    virtual void onResize();

  private:
    std::vector<QLineF> m_lowLines;
    std::vector<QLineF> m_midLines;
    std::vector<QLineF> m_highLines;

    DISALLOW_COPY_AND_ASSIGN(WaveformRendererFilteredSignal);
};
