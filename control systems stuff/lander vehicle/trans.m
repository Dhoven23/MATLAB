robitz = rigidBodyTree('DataFormat','column','MaxNumBodies',3);

global L1 L2

L1 = 2;
L2 = 3;

body = rigidBody('link1');
joint = rigidBodyJoint('joint1','revolute');
setFixedTransform(joint,trvec2tform([0 0 0]));
joint.JointAxis = [0 0 1];
body.Joint = joint;
addBody(robitz, body, 'base');

body = rigidBody('link2');
joint = rigidBodyJoint('joint2', 'revolute');
setFixedTransform(joint, trvec2tform([L1 0 0]));
joint.JointAxis = [0 0 1];
body.Joint = joint;
addBody(robitz, body, 'link1');

body = rigidBody('tool');
joint = rigidBodyJoint('fix1', 'fixed');
setFixedTransform(joint, trvec2tform([L2 0 0]));
body.Joint = joint;
addBody(robitz, body, 'link2');


