#pragma once

#include "common/common.h"

#include "common/console.h"
#include "llama.h"

class CMixtralEngine
{
public:
	std::string getAnswer(std::string strText);
	bool loadModel(std::string strsModelPath, int nMode = 0);
	int releaseModel();
	
	gpt_params params;

    llama_model* model;
    llama_context* ctx;
    llama_context* ctx_guidance;
    int n_ctx_train;
    int n_ctx;

    int ga_i;

    int ga_n;
    int ga_w;


    bool is_antiprompt;
    bool input_echo = true;
    bool display;
    bool need_to_save_session ;

    int n_past;
    int n_remain;
    int n_consumed;
    int n_session_consumed;
    int n_past_guidance;

    int guidance_offset = 0;
    int original_prompt_len = 0;
    std::vector<llama_token> embd_inp;
    std::vector<llama_token> guidance_inp;

    std::string path_session = this->params.path_prompt_cache;
    std::vector<llama_token> session_tokens;

    std::vector<int>   input_tokens; 
    std::vector<int>   output_tokens;
    std::ostringstream output_ss;
    std::vector<llama_token> embd;
    std::vector<llama_token> embd_guidance;

    // tokenized antiprompts
    std::vector<std::vector<llama_token>> antiprompt_ids;

    struct llama_sampling_context* ctx_sampling;

    // prefix & suffix for instruct mode
    std::vector<int> inp_pfx;
    std::vector<int> inp_sfx;
    // chatml prefix & suffix
    std::vector<int> cml_pfx ;
    std::vector<int> cml_sfx;

	bool m_bLoadModel;
};

