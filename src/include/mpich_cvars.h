/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2010 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

/* Automatically generated
 *   by:   ./maint/extractcvars
 *   on:   Tue Sep 20 21:51:59 2016
 *
 * DO NOT EDIT!!!
 */

#if !defined(MPICH_CVARS_H_INCLUDED)
#define MPICH_CVARS_H_INCLUDED

#include "mpitimpl.h" /* for MPIR_T_cvar_range_value_t */

/* Initializes cvar values from the environment */
int MPIR_T_cvar_init(void);
int MPIR_T_cvar_finalize(void);

/* Extern declarations for each cvar
 * (definitions in /usr/src/enzo/mpich/maint/../src/util/cvar/mpich_cvars.c) */

/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/allgather.c */
extern int MPIR_CVAR_ALLGATHER_SHORT_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/allgather.c */
extern int MPIR_CVAR_ALLGATHER_LONG_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/allgatherv.c */
extern int MPIR_CVAR_ALLGATHERV_PIPELINE_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/allreduce.c */
extern int MPIR_CVAR_ALLREDUCE_SHORT_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/allreduce.c */
extern int MPIR_CVAR_ENABLE_SMP_COLLECTIVES;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/allreduce.c */
extern int MPIR_CVAR_ENABLE_SMP_ALLREDUCE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/allreduce.c */
extern int MPIR_CVAR_MAX_SMP_ALLREDUCE_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/alltoall.c */
extern int MPIR_CVAR_ALLTOALL_SHORT_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/alltoall.c */
extern int MPIR_CVAR_ALLTOALL_MEDIUM_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/alltoall.c */
extern int MPIR_CVAR_ALLTOALL_THROTTLE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/barrier.c */
extern int MPIR_CVAR_ENABLE_SMP_BARRIER;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/bcast.c */
extern int MPIR_CVAR_BCAST_MIN_PROCS;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/bcast.c */
extern int MPIR_CVAR_BCAST_SHORT_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/bcast.c */
extern int MPIR_CVAR_BCAST_LONG_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/bcast.c */
extern int MPIR_CVAR_ENABLE_SMP_BCAST;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/bcast.c */
extern int MPIR_CVAR_MAX_SMP_BCAST_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/gather.c */
extern int MPIR_CVAR_GATHER_VSMALL_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/gather.c */
extern int MPIR_CVAR_GATHER_INTER_SHORT_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/gatherv.c */
extern int MPIR_CVAR_GATHERV_INTER_SSEND_MIN_PROCS;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/red_scat.c */
extern int MPIR_CVAR_REDSCAT_COMMUTATIVE_LONG_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/reduce.c */
extern int MPIR_CVAR_REDUCE_SHORT_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/reduce.c */
extern int MPIR_CVAR_ENABLE_SMP_REDUCE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/reduce.c */
extern int MPIR_CVAR_MAX_SMP_REDUCE_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/coll/scatter.c */
extern int MPIR_CVAR_SCATTER_INTER_SHORT_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/comm/comm_split.c */
extern int MPIR_CVAR_COMM_SPLIT_USE_QSORT;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/comm/contextid.c */
extern int MPIR_CVAR_CTXID_EAGER_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/debugger/dbginit.c */
extern int MPIR_CVAR_PROCTABLE_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/debugger/dbginit.c */
extern int MPIR_CVAR_PROCTABLE_PRINT;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/errhan/errutil.c */
extern int MPIR_CVAR_PRINT_ERROR_STACK;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/errhan/errutil.c */
extern int MPIR_CVAR_CHOP_ERROR_STACK;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/init/abort.c */
extern int MPIR_CVAR_SUPPRESS_ABORT_MESSAGE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/init/finalize.c */
extern int MPIR_CVAR_MEMDUMP;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/init/init.c */
extern int MPIR_CVAR_ASYNC_PROGRESS;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/init/init.c */
extern char * MPIR_CVAR_DEFAULT_THREAD_LEVEL;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/init/initthread.c */
extern int MPIR_CVAR_DEBUG_HOLD;
/* declared in /usr/src/enzo/mpich/maint/../src/mpi/init/initthread.c */
extern int MPIR_CVAR_ERROR_CHECKING;
/* declared in /usr/src/enzo/mpich/maint/../src/nameserv/file/file_nameserv.c */
extern char * MPIR_CVAR_NAMESERV_FILE_PUBDIR;
/* declared in /usr/src/enzo/mpich/maint/../src/util/mem/handlemem.c */
extern int MPIR_CVAR_ABORT_ON_LEAKED_HANDLES;
/* declared in /usr/src/enzo/mpich/maint/../src/include/mpierrs.h */
extern int MPIR_CVAR_COLL_ALIAS_CHECK;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/include/mpid_nem_inline.h */
extern int MPIR_CVAR_POLLS_BEFORE_YIELD;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/netmod/mxm/mxm_init.c */
extern int MPIR_CVAR_NEMESIS_MXM_BULK_CONNECT;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/netmod/mxm/mxm_init.c */
extern int MPIR_CVAR_NEMESIS_MXM_BULK_DISCONNECT;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/netmod/mxm/mxm_init.c */
extern int MPIR_CVAR_NEMESIS_MXM_HUGEPAGE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/netmod/ofi/ofi_init.c */
extern char * MPIR_CVAR_OFI_USE_PROVIDER;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/netmod/ofi/ofi_init.c */
extern int MPIR_CVAR_OFI_DUMP_PROVIDERS;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
extern char * MPIR_CVAR_CH3_INTERFACE_HOSTNAME;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
extern MPIR_T_cvar_range_value_t MPIR_CVAR_CH3_PORT_RANGE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
extern char * MPIR_CVAR_NEMESIS_TCP_NETWORK_IFACE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
extern int MPIR_CVAR_NEMESIS_TCP_HOST_LOOKUP_RETRIES;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
extern int MPIR_CVAR_NEMESIS_ENABLE_CKPOINT;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/src/mpid_nem_init.c */
extern int MPIR_CVAR_NEMESIS_SHM_EAGER_MAX_SZ;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/src/mpid_nem_init.c */
extern int MPIR_CVAR_NEMESIS_SHM_READY_EAGER_MAX_SZ;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt.c */
extern int MPIR_CVAR_ENABLE_FT;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
extern int MPIR_CVAR_NEMESIS_LMT_DMA_THRESHOLD;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/channels/nemesis/src/mpid_nem_network.c */
extern char * MPIR_CVAR_NEMESIS_NETMOD;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/ch3u_comm.c */
extern int MPIR_CVAR_CH3_ENABLE_HCOLL;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/ch3u_rma_ops.c */
extern int MPIR_CVAR_CH3_RMA_OP_PIGGYBACK_LOCK_DATA_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/ch3u_rma_progress.c */
extern int MPIR_CVAR_CH3_RMA_ACTIVE_REQ_THRESHOLD;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/ch3u_rma_progress.c */
extern int MPIR_CVAR_CH3_RMA_POKE_PROGRESS_REQ_THRESHOLD;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/ch3u_rma_sync.c */
extern int MPIR_CVAR_CH3_RMA_SCALABLE_FENCE_PROCESS_NUM;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/ch3u_rma_sync.c */
extern int MPIR_CVAR_CH3_RMA_DELAY_ISSUING_FOR_PIGGYBACKING;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpid_rma.c */
extern int MPIR_CVAR_CH3_RMA_SLOTS_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpid_rma.c */
extern int MPIR_CVAR_CH3_RMA_TARGET_LOCK_DATA_BYTES;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpid_vc.c */
extern int MPIR_CVAR_CH3_NOLOCAL;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpid_vc.c */
extern int MPIR_CVAR_CH3_ODD_EVEN_CLIQUES;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpid_vc.c */
extern int MPIR_CVAR_CH3_EAGER_MAX_MSG_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpidi_rma.c */
extern int MPIR_CVAR_CH3_RMA_OP_WIN_POOL_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpidi_rma.c */
extern int MPIR_CVAR_CH3_RMA_OP_GLOBAL_POOL_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpidi_rma.c */
extern int MPIR_CVAR_CH3_RMA_TARGET_WIN_POOL_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpidi_rma.c */
extern int MPIR_CVAR_CH3_RMA_TARGET_GLOBAL_POOL_SIZE;
/* declared in /usr/src/enzo/mpich/maint/../src/mpid/ch3/src/mpidi_rma.c */
extern int MPIR_CVAR_CH3_RMA_TARGET_LOCK_ENTRY_WIN_POOL_SIZE;

/* TODO: this should be defined elsewhere */
#define MPIR_CVAR_assert MPIU_Assert

/* Arbitrary, simplifies interaction with external interfaces like MPI_T_ */
#define MPIR_CVAR_MAX_STRLEN (384)

#endif /* MPICH_CVARS_H_INCLUDED */
