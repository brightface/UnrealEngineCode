#pragma once

#define CheckNull(p){ if(p == NULL) return ; }
#define CheckNullResult(p, result){ if(p == NULL) return result;}

#define CheckTrue(p){ if(p == true) return ; }
#define CheckTrueResult(p, result){ if(p == true) return result; }

#define CheckFalse(p){ if(p == false) return ; }
#define CheckFalseResult(p, result){ if(p == false) return result; }


#define CreateRootTextRender(text, height)\
{\
	Text = CreateDefaultSubobject<UTextRenderComponent>("Text");\
	RootComponent = Text;\
	\
	Text->SetRelativeLocation(FVector(0, 0, height));\
	Text->TextRenderColor = FColor::Red;\
	Text->Text = FText::FromString(text);\
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;\
}

#define CreateTextRender(parent, text, height)\
{\
	Text = CreateDefaultSubobject<UTextRenderComponent>("Text");\
	Text->SetupAttachment(parent);\
	\
	Text->SetRelativeLocation(FVector(0, 0, height));\
	Text->TextRenderColor = FColor::Red;\
	Text->Text = FText::FromString(text);\
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;\
}