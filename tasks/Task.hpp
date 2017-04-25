#ifndef TC_DIRECT_LOCOMOTION_TASK_TASK_HPP
#define TC_DIRECT_LOCOMOTION_TASK_TASK_HPP

#include "tc_direct_locomotion/TaskBase.hpp"

namespace tc_direct_locomotion {

    class Task : public TaskBase
    {
        friend class TaskBase;
        protected:

        public:
        Task(std::string const& name = "tc_direct_locomotion::Task");
        Task(std::string const& name, RTT::ExecutionEngine* engine);

        ~Task();

        bool configureHook();
        bool startHook();
        void updateHook();
        void errorHook();
        void stopHook();
        void cleanupHook();
    };
}

#endif

