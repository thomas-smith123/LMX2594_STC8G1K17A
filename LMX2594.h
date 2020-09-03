//#pragma anon_unions
typedef struct
{
	union
	{
		int 	REG0;
		struct
		{
			int POWERDOWN:1;
			int RESET:1;
			int MUXOUT_LD_SEL:1;
			int FCAL_EN:1;
			int NA00:1;
			int FCAL_LPFD_ADJ:2;
			int FCAL_HPFD_ADJ:2;		
      int OUT_MUTE:1;
			int NA01:4;
      int VCO_PHASE_SYNC:1;
			int RAMP_EN:1;
		};
	}R0;
	union
	{
		int 	REG1;
		struct
		{
			int CAL_CLK_DIV:3;
			int NA10:13;
		};
	}R1;
	int 	R2;
	int 	R3;
	union
	{
		int 	REG4;
		struct
		{
			int NA40:8;
                                                int ACAL_CMP_DLY:8;
		};
	}R4;
	int 	R5;
	int 	R6;
	union
	{
		int 	REG7;
		struct
		{
			int NA70:14;
                                                int ACAL_CMP_DLY:1;
			int NA71:1;
		};
	}R7;
	union
	{
		int 	REG8;
		struct
		{
			int NA80:11;
                                                int VCO_CAPCTRL_FORCE:1;
			int NA81:2;
			int VCO_DACISET_FORCE:1;
			int NA82:1;
		};
	}R8;
	union
	{
		int 	REG9;
		struct
		{
			int NA90:12;
			int OSC_2X:1;
			int NA91:3;
		};
	}R9;
	union
	{
		int 	REG10;
		struct
		{
			int NA100:7;
			int MULT:5;
			int NA101:4;
		};
	}R10;
	union
	{
		int 	REG11;
		struct
		{
			int NA110:4;
			int PLL_R:8;
			int NA111:4;
		};
	}R11;
	union
	{
		int 	REG12;
		struct
		{
			int PLL_R_PRE:12;
			int NA120:4;
		};
	}R12;
	int R13;
	union
	{
		int 	REG14;
		struct
		{
			int NA140:4;
			int CPG:3;
			int NA141:9;
		};
	}R14;
	int R15;
	union
	{
		int 	REG16;
		struct
		{
			int VCO_DACISET:9;
			int NA160:7;
		};
	}R16;

	union
	{
		int 	REG17;
		struct
		{
			int VCO_DACISET_STRT:9;
			int NA170:7;
		};
	}R17;
	int R18;

	union
	{
		int 	REG19;
		struct
		{
			int VCO_CAPCTRL:8;
			int NA190:8;
		};
	}R19;

	union
	{
		int 	REG20;
		struct
		{
			int NA200:10;
                                                int VCO_SEL_FORCE:1;
                                                int VCO_SEL:3;
			int NA201:2;
		};
	}R20;
	
	int R21;
	int R22;
	int R23;
	int R24;
	int R25;
	int R26;
	int R27;
	int R28;
	int R29;
	int R30;
	
               union
	{
		int 	REG31;
		struct
		{
			int NA310:14;
			int CHDIV_DIST_2:1;
			int NA311:1;
		};
	}R31;

	int R32;
	int R33;

	union
	{
		int 	REG34;
		struct
		{
			int PLL_N_H:3;
			int NA340:13;
		};
	}R34;

	int R35;

	union
	{
		int 	REG36;
		int PLL_N_L:16;
	}R36;

	union
	{
		int 	REG37;
		struct
		{
			int NA370:8;
			int PFD_DLY_SEL:6;
			int NA371:1;
			int MASH_SEED_EN:1;
		};
	}R37;	
	
	union
	{
		int 	REG38;
		int PLL_DEN_H:16;
	}R38;

	union
	{
		int 	REG39;
		int 	PLL_DEN_L;
	}R39;
	
	union
	{
		int 	REG40;
		int 	MASH_SEED_H;
	}R40;
	
	union
	{
		int 	REG41;
		int 	MASH_SEED_L;
	}R41;
	
	union
	{
		int 	REG42;
		int 	PLL_NUM_H;
	}R42;
	
	union
	{
		int 	REG43;
		int 	PLL_NUM_L;
	}R43;

	union
	{
		int 	REG44;
		struct
		{
			int MASH_ORDER:3;
			int NA440:2;
			int MASH_RESET_N:1;
			int OUTA_PD:1;
			int OUTB_PD:1;
			int OUTA_POW:6;
			int NA441:2;
		};
	}R44;
	
	union
	{
		int 	REG45;
		struct
		{
			int OUTB_POW:6;
			int NA450:3;
			int OUTA_ISET:2;
			int OUTA_MUX:2;
			int NA451:3;
		};
	}R45;
	
	union
	{
		int 	REG46;
		struct
		{
			int OUTB_MUX:2;
			int NA460:14;
		};
	}R46;

	int R47;
	int R48;
	int R49;
	int R50;
	int R51;
	int R52;
	int R53;
	int R54;
	int R55;
	int R56;
	int R57;
	int R58;
	int R59;
	int R60;
	int R61;
	int R62;
	int R63;
	int R64;
	int R65;
	int R66;
	int R67;
	int R68;
  int R69;
	int R70;
	int R71;
	int R72;
	int R73;
	int R74;
	
                union
	{
		int 	REG75;
		struct
		{
			int NA750:6;
			int CHDIV:5;
			int NA751:5;
		};
	}R75;

                int R76;
	int R77;

                union
	{
		int 	REG78;
		struct
		{
			int NA780:1;
			int VCO_CAPCTRL_STRT:8;
			int QUICK_RECAL_EN:1;
			int NA781:1;
			int RAMP_THRESH:1;
			int NA782:4;
		};
	}R78;

	union
	{
		int 	REG79;
		int RAMP_THRESH_H:16;
	}R79;

	union
	{
		int 	REG80;
		int RAMP_THRESH_L:16;
	}R80;

	union
	{
		int 	REG81;
		struct
		{
			int RAMP_LIMIT_HIGH:1;
			int NA810:15;
		};
	}R81;

	union
	{
		int 	REG82;
		int RAMP_LIMIT_HIGH_H:16;
	}R82;

	union
	{
		int 	REG83;
		int RAMP_LIMIT_HIGH_L:16;
	}R83;

	union
	{
		int 	REG84;
		struct
		{
			int RAMP_LIMIT_LOW:1;
			int NA840:15;
		};
	}R84;

	union
	{
		int 	REG85;
		int RAMP_LIMIT_LOW_H:16;
	}R85;

	union
	{
		int 	REG86;
		int RAMP_LIMIT_LOW_L:16;
	}R86;

	int R87;
	int R88;
	int R89;
	int R90;
	int R91;
                int R92;
	int R93;
	int R94;
	int R95;

	union
	{
		int 	REG96;
		struct
		{
			int NA960:2;
			int RAMP_BURST_COUNT:13;
			int RAMP_BURST_EN:1;
		};
	}R96;

	union
	{
		int 	REG97;
		struct
		{
			int RAMP_BURST_TRIG:2;
			int NA970:1;
			int RAMP_TRIGA:4;
			int RAMP_TRIGB:4;
			int NA971:4;
			int RAMP_RST:1;
		};
	}R97;

	union
	{
		int 	REG98;
		struct
		{
			int RAMP0_DLY:1;
			int NA980:1;
			int RAMP0_INC_H:14;
		};
	}R98;

	union
	{
		int 	REG99;
		int RAMP0_INC_L:16;
	}R99;

	union
	{
		int 	REG100;
		int RAMP0_LEN:16;
	}R100;

	union
	{
		int 	REG101;
		struct
		{
			int RAMP0_NEXT_TRIG:2;
			int NA1010:2;
			int RAMP0_NEXT:1;
			int RAMP1_RST:1;
			int RAMP1_DLY:1;
			int NA1011:9;
		};
	}R101;

	union
	{
		int 	REG102;
		struct
		{
			int RAMP1_INC_H:14;
			int NA1020:2;
		};
	}R102;

	union
	{
		int 	REG103;
		int RAMP1_INC_L:16;
	}R103;

	union
	{
		int 	REG104;
		int RAMP1_LEN:16;
	}R104;

	union
	{
		int 	REG105;
		struct
		{
			int RAMP1_NEXT_TRIG:2;
			int NA1050:2;
			int RAMP1_NEXT:1;
			int RAMP_MANUAL:1;
			int RAMP_DLY_CNT:10;
		};
	}R105;

	union
	{
		int 	REG106;
		struct
		{
			int RAMP_SCALE_COUNT:3;
			int NA1060:1;
			int RAMP_TRIG_CAL:1;
			int NA1061:11;
		};
	}R106;

	int R107;
	int R108;
	int R109;
	int R110;
	int R111;
	int R112;
}_LMX2594_REG;



typedef struct
{
	double pll_fre;
	double pfd_fre;
	float chdiv_total;
	double vcofre;
	int PreN;
	int N;
	float nume;
	float deno;
}_PLL_DAT;


