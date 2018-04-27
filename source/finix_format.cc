#include <string>
#include "finix_format.hpp"
#include "json11/json11.hpp"
using namespace finix;
using namespace json11;


void FinixFormat::set_timestamp(long long tt) {
    m_timestamp = tt;
};

void FinixFormat::set_frame_type(std::string frame_type) { 
    m_frame_type = frame_type;
};

void FinixFormat::set_frame_subtype(std::string frame_subtype) { 
    m_frame_subtype = frame_subtype;
};

void FinixFormat::set_src_address(std::string src_address) { 
    m_src_address = src_address;
};

void FinixFormat::set_dst_address(std::string dst_address) { 
    m_dst_address = dst_address;
};

void FinixFormat::set_dbm_signal(int32_t dbm_signal) { 
    m_dbm_signal = dbm_signal;
};

void FinixFormat::set_signal_quality(int32_t signal_quality) { 
    m_signal_quality = signal_quality;
};
void FinixFormat::set_dbm_antenna(int32_t antenna) { 
    m_antenna = antenna;
};

void FinixFormat::set_db_signal(int32_t db_signal) { 
    m_db_signal = db_signal;
};

void FinixFormat::set_dbm_noise(int32_t dbm_noise) { 
    m_dbm_noise = dbm_noise;
};

std::string FinixFormat::serialize_to_json_string() { 
    Json event = Json::object {
      { "timestamp", std::to_string(m_timestamp) },
      { "frame_type", m_frame_type },
      { "frame_subtype", m_frame_subtype },
      { "src_address", m_src_address },
      { "dst_address", m_dst_address },
      { "dbm_signal", m_dbm_signal },
      { "antenna", m_antenna },
      // { "signal_quality", m_signal_quality },
      // { "db_signal", m_db_signal },
      // { "dbm_noise", m_dbm_noise },
    };
    return event.dump();
};

