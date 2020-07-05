function varargout = adder(varargin)
% ADDER MATLAB code for adder.fig
%      ADDER, by itself, creates a new ADDER or raises the existing
%      singleton*.
%
%      H = ADDER returns the handle to a new ADDER or the handle to
%      the existing singleton*.
%
%      ADDER('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in ADDER.M with the given input arguments.
%
%      ADDER('Property','Value',...) creates a new ADDER or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before adder_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to adder_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help adder

% Last Modified by GUIDE v2.5 26-Mar-2019 09:38:21

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @adder_OpeningFcn, ...
                   'gui_OutputFcn',  @adder_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before adder is made visible.
function adder_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to adder (see VARARGIN)

% Choose default command line output for adder
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes adder wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = adder_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function A_Callback(hObject, eventdata, handles)

input = str2num(get(hObject,'String'));

if (isempty(input))
    set(hObject,'String','0')
end
guidata(hObject, handles);


function A_CreateFcn(hObject, eventdata, handles)
% hObject    handle to A (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function B_Callback(hObject, eventdata, handles)

input = str2num(get(hObject,'String'));

if (isempty(input))
    set(hObject,'String','0')
end
guidata(hObject, handles);


function B_CreateFcn(hObject, eventdata, handles)
% hObject    handle to B (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in add_pushbutton.
function add_pushbutton_Callback(hObject, eventdata, handles)

a = get(handles.A,'String');
b = get(handles.B,'String');

total = str2num(a)+ str2num(b);
c = num2str(total);

set(handles.answer,'String',c);
guidata(hObject, handles);